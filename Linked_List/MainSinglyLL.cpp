#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *next ;
	Node(int data){
		this -> data = data;
		this -> next = NULL; 
	}
};


// <<---- Inserting in head ---->>
void InsertingAtHEAD(Node* &head, int val){
	
	// create a new node 
	Node* temp = new Node(val);

    temp -> next = head;
    head = temp;
	
}



void printLL(Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout<< temp -> data <<" ";
		temp = temp -> next;
	}
	cout<<endl;
}



int main() {
	Node* node1 = new Node(10);
//	cout << node1 -> data <<endl;
//	cout << node1 -> next <<endl;
	
	Node* head = node1;
	
	InsertingAtHEAD(head,12);
	InsertingAtHEAD(head,34);
	InsertingAtHEAD(head,23);
	printLL(head);

	

	
	
	return 0;
}
