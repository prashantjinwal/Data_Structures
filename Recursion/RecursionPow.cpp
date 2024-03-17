#include <iostream>
using namespace std; 

RecurionPow(int n){
	if(n == 0){
		return 1;
	}
	
	return 2 * RecurionPow(n-1);
}


int main() {
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<endl;
	
	cout<<RecurionPow(n);
	
	return 0;
}
