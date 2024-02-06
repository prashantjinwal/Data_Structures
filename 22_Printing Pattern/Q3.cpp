#include<iostream>
using namespace std;
void PrintStar3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j <<" ";
        }
        cout<<endl;
    }
    
}

int main(int argc, char const *argv[])
{
    int r;
    cout<<"Enter the number";
    cin>>r;
    PrintStar3(r);
    return 0;
}
