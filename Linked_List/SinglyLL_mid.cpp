#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
		
};

void Insertion(Node* &head, int val){
	Node* temp = new Node(val);
	
	temp->next = head;
	head = temp;
}

void InsrtAtPositon(Node* &head, int val, int pos){
	Node* temp = head;
	int cnt = 1;
	
	if(pos == 1){
	//head
	Insertion(head, val);
	return;
		
	}
	
	while(cnt < pos - 1){
		temp = temp -> next;
		cnt++;
	}
	
	Node* insertpos = new Node(val);
	insertpos -> next = temp -> next ;
	temp->next = insertpos;
	
}

void printFp(Node* &head){
	Node* temp = head;
	
	while (temp != NULL){
		cout<< temp->data << " ";
		temp = temp->next;
	}
	cout<<endl;
}

int main() {
	Node* node1 = new Node(10);
	
	Node* head = node1;
	Insertion(head,33);
	Insertion(head,55);
	Insertion(head,47);
	InsrtAtPositon(head,69,3);
	InsrtAtPositon(head,98,1);
	printFp(head);
	
	return 0;
}
