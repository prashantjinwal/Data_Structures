#include <iostream>
using namespace std;
int HCF (int a , int b){
	if(b == 0){
		return a ;
	}
	return HCF(b,a%b);
}

int main() {
	int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int result = HCF(num1, num2);
    cout << "The HCF of " << num1 << " and " << num2 << " is: " << result << endl;
	
	
	return 0;
}
