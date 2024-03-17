#include <iostream>
using namespace std;
	
	int factorial(int n){
		if(n == 0){
			return 1;
		}
		
//		int smallProblem = factorial(n-1);
//		int BiggerProblem = n * smallProblem;
//		return BiggerProblem;

		return n * factorial(n-1);
	}


int main() {
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<endl;
	cout<< factorial(n);
	
	return 0;
}
