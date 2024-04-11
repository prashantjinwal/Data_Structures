#include <iostream>
#include <queue>
using namespace std;


int main() {
	queue<int> q;
	
	q.push(3);
	q.push(5);
	q.push(8);
	q.push(10);
	cout<<"front of q is : " <<q.front()<<endl;
	cout <<"Size of Queue : " << q.size() << endl;
	
	q.pop();
	q.pop();
	
	cout<< "Size of queue is : " << q.size()<<endl;
	
	q.pop();
	q.pop();
	
	if(q.empty()){
		cout<<"Queue is empty"<<endl;
	}else{
		cout<<"Queue is not empty"<<endl;
	}
		
	return 0;
}
