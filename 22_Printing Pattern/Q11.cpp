#include<iostream>
using namespace std;

void print1(int n){
    int start = 1;
    for (int i = 0; i < n; i++){
        if (i%2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j < i; j++){
            cout<<start;
            start = 1 - start ;
        }
        cout<<endl;

        
    }
    
}

int main(){
    int row;
    cout<<"enter the number: ";
    cin>>row;

    print1(row);


    return 0;
}

// 0
// 10
// 010
// 1010
// 01010
// 101010