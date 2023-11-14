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
int silnia(int n){
	if(n==0){
		return 1;
	}
	else if(n==1){
		return 1;
	}
	else{
		return silnia(n-1)*n; 
	}
}
//ciag 1
int ciag1(int i){
	if(i==1){
		return 1;
	}
	else if (i==2) {
		return 2;
	}
	else{
		return ciag1(i+i); 
	}
}

	
int main(){
	//cout << fibo(20);
	//cout << silnia(10);
	cout << ciag1(10);
	return 0;
}
