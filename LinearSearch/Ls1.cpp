// --- Prashant 23pcs5120 ---
#include <iostream>
using namespace std;

int LS(int arr[], int key, int size){
	for(int i = 0; i<size; i++){
		if(arr[i] == key){
			cout<<"key is found!! ";
			return i;
		}
	}
	
	return -1;
}

int main() {
	int size, key;
	cout<<"Enter the size of array : ";
	cin>> size;
	
	int arr[size];
	
	cout<<"Enter the element of array"<<endl;
	for(int i = 0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the number you want to search" <<endl;
	cin>>key;
	
	cout<<LS(arr, key, size);
	
	
	return 0;
}
