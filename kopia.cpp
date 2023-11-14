#include<iostream>
using namespace std;

/*rekurencja*/

int fibo(int n){
	/*1 element ci¹gu fibonacciego jest równy 1*/
	if(n==1){
		return 1;
	}
	/*2 element ci¹gu fibonacciego tez jest róny 1*/
	else  if(n==2){
		return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
//silnia
int h(int n){
	if(n==0){
		return 1;
	}
	else if(n==1){
		return 1;
	}
	else{
		return h(n-1)*n; 		
	}
}

//ciag1
/*int ciag1(int n){
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 2;
	
}*/

	
int main(){
	//cout << fibo(20);
	cout << h(3 );
	return 0;
}
