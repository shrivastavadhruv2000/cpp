#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int p=1000, rate=5, total, n=5,t=3;
	
	total= p*(1+ rate/n)*(n*t);
	cout<< total;
}
