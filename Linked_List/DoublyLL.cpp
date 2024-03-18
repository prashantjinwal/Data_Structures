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

void insertToHead(Node* &head, int n){
	Node* temp = new Node(n);
	
	temp->next = head;
	head->prev = temp;
	head = temp;
	
}

void printLL (Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
	
}
int main() {
	Node* node1 = new Node(10);
	
	Node* head = node1;
	
	insertToHead(head, 3);
	insertToHead(head, 6);
	insertToHead(head, 79);
	
	printLL(head);
	
	return 0;
}
