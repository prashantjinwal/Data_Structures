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


// <<---- Inserting in tail ---->>
void InsertingAtTail(Node* &tail, int val){
    Node* temp = new Node(val);
    
    if(tail == NULL) {
        // If the list is empty, set both head and tail to the new node
        tail = temp;
    } else {
        // Otherwise, append the new node to the end of the list
        tail->next = temp;
        tail = temp; // Update the tail pointer to point to the new node's next node
    }
}




void printTLL(Node* &tail){
	Node* temp = tail;
	
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
	
	Node* tail = node1;
 Node* head = node1;
	
	InsertingAtTail(tail,12);
	InsertingAtTail(tail,34);
	InsertingAtTail(tail,23);

	printTLL(head);

	

	
	
	return 0;
}
