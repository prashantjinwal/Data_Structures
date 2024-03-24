#include <iostream>
#include<array>
using namespace std;

int main() {
	int arr[5]={2,23,4,5,6,};
	
	array<int,5> a ={3,34,5,6,66};
	
	int size = a.size();
	
	for(int i=0; i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"element at 2 is : "<< a.at(2)<<endl;
	cout<<"is array is empty : "<< a.empty()<<endl;
	cout<< "Frist element of array is : " << a.front()<<endl;
	cout<< "last element of array is : " << a.back()<<endl;
	
	return 0;
}
