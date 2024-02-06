#include<iostream>
using namespace std;
void PrintStar3(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
         cout<<j << " ";  
        }
        cout<<endl;
    }
    
}
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

int main(int argc, char const *argv[])
{
    int r;
    cout<<"Enter the number";
    cin>>r;
    PrintStar3(r);
    return 0;
}