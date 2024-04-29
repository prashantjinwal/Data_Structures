#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    ~Node() {
        if (next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

// <<---- Inserting in head ---->>
void InsertingAtHEAD(Node*& head, int val) {

    // create a new node 
    Node* temp = new Node(val);

    temp->next = head;
    head = temp;

}

void deletefromhead(Node*& head) {
    if (head == NULL)
        cout << "the list is empty ";
    else {
        Node* p = head;
        head = head->next;
        delete p;
    }
}

void DeleteSLL(Node*& head, int x) {
    Node* p = head;
    Node* prev = NULL;
    
    // If head node itself holds the key to be deleted
    if (p != NULL && p->data == x) {
        deletefromhead(head);
        return;
    }

    // Search for the node to be deleted
    while (p != NULL && p->data != x) {
        prev = p;
        p = p->next;
    }
    
    // If the node is not found
    if (p == NULL) {
        cout << "Element not found ";
        return;
    }
    
    // Remove the node from the list
    prev->next = p->next;
    delete p;
}


void printLL(Node*& head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;

    InsertingAtHEAD(head, 12);
    InsertingAtHEAD(head, 34);
    InsertingAtHEAD(head, 23);
    DeleteSLL(head, 23);
    printLL(head);

    return 0;
}

