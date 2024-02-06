#include<iostream>
using namespace std;

void PrintStar(int n){
    for(int i = 0 ; i<n ; i++ ){
        
        for (int s = 0; s <= i ; s++)
        {
           cout<<" ";
        }

        for (int j = 0; j < 2*n - (2*i + 1); j++)
        {
            cout<<"*";
        }
        
        
        cout<<endl;
        
    }
}
//  *********
//   *******
//    *****
//     ***
//      *

int main(int argc, char const *argv[]){
    int t;
    cout<<"Enter a number"<<endl;
    cin>>t;
    PrintStar(t);
    
    return 0;
}