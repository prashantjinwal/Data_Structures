#include<iostream>
using namespace std;

void print1(int n){
    int num = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            cout<< num;
            num++;
        }
        cout<<endl;
    }  
}

int main() {
    int row;
    cout<<"enter the number: ";
    cin>>row;

    print1(row);
    return 0;
}