#include<iostream>
#include<queue>
using namespace std;

class node{

public:
	int data;
	node*left;
	node*right;
	
	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* buildTree(){

	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}

	node* n = new node(d);
	n->left = buildTree();
	n->right = buildTree();

	return n;
}
/*Level Order Traversal
Expected Output
1
2 3
4 5 6
7
*/

void levelOrderPrint(node*root){

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* temp = q.front();
		if(temp==NULL){
			cout<<endl;
			q.pop();
			//insert a new null for the next level
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			q.pop();
			cout<<temp->data<<" ";

			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}

	}
	return;
}


int main(){
	
	node* root = buildTree();
	levelOrderPrint(root);
	return 0;
}