#include<iostream>
using namespace std;

int BS(int arr[] , int n , int key){
    int start = 0;
    int end = n - 1;

    while (start <= end){
        int mid = start + (end - start)/2;
        if (arr[mid] == key){
            return mid;
        }
        if (arr[mid] > key){
             end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
    
}


int main(int argc, char const *argv[]){

    int z;
    cout<<"Enter the size of array : ";
    cin>>z;
    int arr[z];
    for (int i = 0; i < z; i++){
        cin>> arr[i];
    }
    
    int key;
    cout<<"Enter the key value : ";
    cin>>key;
    int size = sizeof(arr)/sizeof(int);
    
    // ____ function call ____
    cout<<BS(arr,size,key);
    
    return 0;
}
