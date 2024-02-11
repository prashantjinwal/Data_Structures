// find peak element in mountain array
#include<iostream>
using namespace std;

int BS(int arr[] , int n ){
    int start = 0;
    int end = n - 1;

    while (start <= end){
        int mid = start + (end - start)/2;
        if (arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
    
}


int main(int argc, char const *argv[]){

    int arr[3] ={1,0,1} ;
    
    // ____ function call ____
    cout<<BS(arr,3);
    
    return 0;
}
