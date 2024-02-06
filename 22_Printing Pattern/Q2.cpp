#include<iostream>
using namespace std;

void PrintStar2(int n){

    for (int i = 0; i < n ; i++){
        for (int j=0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl; 
    }
}

int main(int argc, char const *argv[])
{
    int h;
    cout<<"ENTER THE NUMBER";
    cin>>h;
    PrintStar2(h);
    
    return 0;
}
