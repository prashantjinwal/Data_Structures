#include<iostream>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < (n - i)-1 ; j++){
            cout<<" ";
        }

        for (int m = 0; m < (2*i)+1 ; m++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void print2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout<<" ";
        }
    
        for (int x = 0; x < 2*n -(2*i +1) ; x++){
            cout<<"*";
        }
        cout<<endl;
    
        
    }
    
} 

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

int main(int argc, char const *argv[]){
    
    int row ;
    cout<<"enter the row : ";
    cin>>row;

    print(row);
    print2(row);


    return 0;
}
