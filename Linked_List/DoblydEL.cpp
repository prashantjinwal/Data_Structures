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
	
	~Node(){
		int val = this->data;
		if(next != NULL){
			delete next;
			next = NULL;
		}
//		cout<<"Memory free for node with data"<< val << endl;
	}
};

void DelELE (Node* &head, int p){
//	deleting first or start node 
	
	if(p == 1){
		Node* temp = head;
		temp->next->prev = NULL;
		head = temp->next;
		temp->next = NULL; 
		delete temp;
	}else{
		Node* curr = head;
		Node* prev = NULL;
		
		int cnt = 1;
		while(cnt < p){
			prev = curr;
			curr = curr -> next;
			cnt++;
		}
		curr->prev = NULL;
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
		
	}
	
}

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
//	Node* tail = node1;
	
	insertToHead(head, 3);
	insertToHead(head, 6);
	insertToHead(head, 79);
	DelELE(head,3);
	printLL(head); 
	
	
	return 0;
}
