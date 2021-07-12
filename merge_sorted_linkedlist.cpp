#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};
//----------Linked List-----------//
void insertAtHead(node * &head,int data){
	if(head==NULL){
		head = new node(data);
		return;
	}	
	//otherwise 
	node * n = new node(data);
	n->next = head;
	head = n;
}

node* merge(node *a, node* b){
	//Complete this method
	//base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	//rec case
	node * c;

	if(a->data < b->data){
		c = a;
		c->next = merge(a->next,b);
	}
	else{
		c = b;
		c->next = merge(a,b->next);
	}
	return c;
}




void printLL(node * head){

	while(head!=NULL){
		cout <<head->data <<"-->";
		head = head->next;
	}
	cout <<endl;
}


int main(){
	

	node* a = NULL;
	insertAtHead(a,10);
	insertAtHead(a,7);
	insertAtHead(a,5);
	insertAtHead(a,1);
	
	node* b = NULL;
	insertAtHead(b,6);
	insertAtHead(b,3);
	insertAtHead(b,2);
	node* head = merge(a,b);
	printLL(head);
	

	return 0;
}