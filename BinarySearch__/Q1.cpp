#include<iostream>
using namespace std;

int FirstOccurance(int arr[] , int n , int key){
    int start = 0;
    int end = n - 1;
    int ans = 0;

    while (start <= end){
        int mid = start + (end - start)/2;
        if (arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] > key){
             end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int LastOccurance(int arr[] , int n , int key){
    int start = 0;
    int end = n - 1;
    int ans = 0;

    while (start <= end){
        int mid = start + (end - start)/2;
        if (arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] > key){
             end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
    
}


int main(int argc, char const *argv[]){

    int arr[6] = {1,3,3,3,3,5};

    // ____ function call ____
    cout<<FirstOccurance(arr,6,3)<<endl;;
    cout<<LastOccurance(arr,6,3);
    
    return 0;
}
