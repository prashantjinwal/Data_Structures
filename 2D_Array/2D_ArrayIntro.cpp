#include<iostream>
using namespace std;

bool ispresent (int Arr[][3], int target, int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0 ; j < col; j++){
            if(Arr[i][j] == target){
                return 1;
            }
        }
        
    }

    return 0;
    
}


int main(){

    creating 2d-Array

    int Arr[3][3];
    for (int i = 0; i < 3; i++){
        cout<<"Enter row "<<i+1<<endl;
        for (int j = 0; j < 3; j++){
            cin>>Arr[i][j];
        }
        // cout<<endl;
    }


    // also write like this :-)
    // int Arr[3][3] = {{1,3,4}, {23,34,5}, {42,4,6}};

    cout<<"Array will be:- "<<endl;
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){
           cout<<Arr[i][j];
            cout<<"\t";
        }
        
        cout<<endl;
    }

    // int Arr2[3][3] = {{1,3,4} ,{2,2,7},{2,8,5}};

    // cout<<ispresent(Arr2, 5, 3,3 );
    

    



    return 0;
}