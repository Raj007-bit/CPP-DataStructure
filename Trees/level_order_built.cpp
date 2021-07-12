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

//Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
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


/* Implement Level Order Build
for the tree
*/

node* levelOrderBuild(){

	int d;
	cin>>d;

	node* root = new node(d);

	queue<node*> q;
	q.push(root);


	while(!q.empty()){
		node* current = q.front();
		q.pop();

		int c1, c2;
		cin>> c1 >> c2;

		if(c1!=-1){
			current->left = new node(c1);
			q.push(current->left);
		}
		if(c2!=-1){
			current->right = new node(c2);
			q.push(current->right);
		}
	}
	return root;
}



int main(){
	
	node* root = levelOrderBuild();
	levelOrderPrint(root);



	return 0;
}