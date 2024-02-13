#include<iostream>
using namespace std;

void print1(int n){
    int space = 2 * (n-1);
    for (int i = 1; i <= n; i++){
        
        // number 
        for (int j = 1; j <= i; j++){
            cout<<j;
        }

        // space
        for (int s = 0; s <= space; s++){
            cout <<" ";
        }
        

        // number
        for (int j = i; j >= 1; j--){
            cout<<j;
        }
        
        cout<<endl;
        space -= 2;
        
    }
    
}

int main(){
    int row;
    cout<<"enter the number: ";
    cin>>row;

    print1(row);


    return 0;
}

//  1         1
//  12       21
//  123     321
//  1234   4321
//  12345 54321