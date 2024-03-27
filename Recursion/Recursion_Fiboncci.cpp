#include <iostream>
using  namespace std;

int fibonacci (int n){
	if(n <= 1){
		return n;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

void printFibo (int n){
	cout << "Enter the number of terms for Fibonacci Series: " <<endl;
	
	for(int i = 0; n > i; ++i){
		cout<<fibonacci(i) <<" ";
	}cout<<endl;
}

int main() {
	
	int num;
	cout<<"Enter the number you want fibonacci series : ";
	cin>>num;
	printFibo(num);
	
	
	return 0;
}
