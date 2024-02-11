#include<iostream>
using namespace std;

void print1(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

int main(){
    int row;
    cout<<"enter the number: ";
    cin>>row;

    print1(row);


    return 0;
}