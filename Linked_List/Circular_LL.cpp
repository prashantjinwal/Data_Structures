#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
	
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
	
	~Node(){
		int val = this->data;
		while(this->next != NULL){
			delete next;
			next = NULL;
		}
		cout<<"destructor run"<<endl;
	}
};

//--- Circular Linked lsit ---

void  insertNode(Node*  &tail, int element, int d){
	if(tail == NULL){
		Node* newNode = new Node(d);
		tail = newNode;
		newNode -> next = newNode;
	}else{
		Node* curr = tail;
		while(curr->data != element){
			curr = curr -> next;
		}
		Node* temp = new Node(d);
		temp -> next  = curr -> next;
		curr -> next  = temp;
	}
}

void printLL(Node* tail){
	Node* temp = tail;
//	empty list
	if(tail == NULL){
		cout<<"List is empty"<<endl;
		return;
	}
	
	do {
		cout<<tail -> data << " ";
		tail = tail->next;
	}while (tail != temp );
	cout<<endl;
}

void deleteNode(Node* &tail, int value){
	if(tail == NULL){
		cout<<"List is empty, please check again"<<endl;
		return ;
	}
	else{
		Node* prev = tail;
		Node* curr = prev -> next;
		while(curr -> data != value){
			prev = curr;
			curr = curr -> next;
		}
		prev -> next = curr -> next;
//		1 node linked list
		if (curr == prev){
			tail = NULL;
		}
//		>=2 node linked list
		else if(tail == curr){
			tail = prev;
		}
		
		curr -> next  = NULL;
		delete curr;
		
	}
}

int main( ) { 
	Node* tail = NULL;
	
	insertNode(tail , 5, 3);
	insertNode(tail , 3, 5);
	insertNode(tail , 3, 7);
	insertNode(tail , 7, 9);
	insertNode(tail , 9, 10);
	deleteNode(tail,3);
	printLL(tail);
	
	return 0;
}
