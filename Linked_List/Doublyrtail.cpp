#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
		this->prev = NULL;
	}
};

void insertToTail(Node* &tail, int n){
	Node* temp = new Node(n);
	
	tail -> next = temp;
	tail->prev = tail;
	tail = temp;
	
}


void printLL(Node* &tail){
	Node* temp = tail;
	
	while(temp != NULL){
		cout<< temp -> data <<" ";
		temp = temp -> next;
	}
	cout<<endl;
}

int main() {
	Node* node1 = new Node(10);
	
	Node* head = node1;
	Node* tail = node1;
	
	insertToTail(tail, 3);
	insertToTail(tail, 6);
	insertToTail(tail, 79);
	
	printLL(head);
	
	return 0;
}
