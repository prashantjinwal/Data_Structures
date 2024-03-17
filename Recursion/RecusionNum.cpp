#include <iostream>
using namespace std;
void pintRecusion(int n){
	
	if(n == 0){
		return ;
	}
	pintRecusion(n-1);
	cout<<n <<" ";
	
}


int main() {
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	cout<<endl;
	
	pintRecusion(num);
	
	return 0;
}
