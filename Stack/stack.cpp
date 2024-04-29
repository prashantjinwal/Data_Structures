#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack{
	public:
		int arr[MAX_SIZE];
		int top;
	
	Stack(){
		top = -1;
	}
	
	void push(int value){
		if(top >= MAX_SIZE - 1){
			cout << "Stack Overflow: Cannot push element, stack is full." << endl;
            return;
		}
		arr[++top] = value;
	}
	
	void pop() {
        if (top < 0) {
            cout << "Stack Underflow: Cannot pop element, stack is empty." << endl;
            return;
        }
        cout << "Popped " << arr[top--] << " from the stack." << endl; 
    }
	
	
	void isEmpty() {
        if(top == -1 || top == 0){
        	cout<<"Stack is empty "<<endl;
		}else{
			cout<<"Stack is not empty"<<endl;
		}
    }
	
};

int main() {
//	23pcs5120
	Stack s;
	s.push(10);
	s.push(10);
	s.pop();
	s.isEmpty();
	
	
	return 0;
}
