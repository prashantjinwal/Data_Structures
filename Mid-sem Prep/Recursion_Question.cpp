#include <iostream>
using namespace std;

//---------- [Q1] factorial ----------
int facto(int n){
	if(n == 0){
		return 1;
	}
		return n * facto(n-1);
}
// -----------------------------


//------ [Q2] Statement printing ---------
void printStatement(int e){
	if(e == 0){
		return ;
	}
	cout<<"Good morning"<< endl;
	printStatement(e-1);
	return;
}
//----------------------------------------

//------- [Q3] print number dercresing order ------
void printNumber(int e){
	if(e==0) return ;
	
	cout<<e;
	printNumber(e-1);
	return ;
}
// ------------------------------------------------


//------- [Q4] print number increasing order ------
void printNum(int x ,int e){
	if (x > e){
		return ;
	}
	cout<<x <<endl;
	printNum(x+1, e);
	return ;
}
// -----------------------------------------------


// ----------- [Q5] ------------
int printSum(int t){
	if(t == 0){
		return 1;
	}
	static int sum = 0;
	sum += t;
	printSum(t-1);
	return sum;
}
// -----------------------------


// ----------- [Q6] ------------
int power(int r, int p, int l){
	if(p == l){
		return 1;
	}
	static int val = 1;
	val *= r;
	power(r, p+1 ,l);
	return val;
}
// ----------------------------


// ------ [Q7] rat at maze question  -------
int maze(int cr, int cc, int er, int ec){
	int rightWays = 0;
	int downWays = 0;
	
	if(cr == er && cc == ec){
		return 1;
	}
	if(cr == er){
		rightWays += maze(cr,cc+1,er,ec);
	}
	if(cc == ec){
		downWays += maze(cr+1,cc,er,ec);
	}
	if(cr<er && cc<ec){
		downWays += maze(cr+1,cc,er,ec);
		rightWays += maze(cr,cc+1,er,ec);
	}
	
	int totalWays = rightWays + downWays;
	return totalWays;
}




int main() { 

// -------- factorial -----------
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<facto(n);
//	-----------------------------


//------------ [Q2] -----------
	int e;
	cout<<"Enter a number : ";
	cin>>e;
	printStatement(e);
// ----------------------------

//---------- [Q3] -------------
	int e;
	cout<<"Enter a number : ";
	cin>>e;
	printNumber(e);
// ----------------------------

// ------- [Q4] --------
	int y=10;
	printNum(1,y);
// ---------------------

// --------- [Q5] ---------
	int y = 10;
	cout<<printSum(y);
// ------------------------

// --------- [Q6] --------------
	int u , y;
	cout<<"Enter a number : ";
	cin >> u;
	cout<<"Enter a power : ";
	cin >> y;
	cout<< power(u,0 ,y);
// -----------------------------



// ----------- [Q7] ------------
	int er,ec;
	cout<<"Enter a row : ";
	cin>>er;
	cout<< "Enter a column : " ;
	cin>>ec;
	cout<<maze(1,1,er,ec);
// ------------------------------


	return 0;
}
