#include<iostream>
using namespace std;
void PrintStar3(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            cout<<"* " ;
            
        }
        cout<<endl;
        
    }
    
}
// * * * * * * 
// * * * * * 
// * * * *
// * * *
// * * 
// *

int main(int argc, char const *argv[])
{
    int r;
    cout<<"Enter the number";
    cin>>r;
    PrintStar3(r);
    return 0;
}

