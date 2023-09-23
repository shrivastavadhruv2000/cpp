#include<iostream>
using namespace std;
int main(){
	int even=0, odd=0;
	for(int i=0; i<20; i++){
		if(i%2==0)
			even= even+i;
		else
			odd= odd+i;
	}
	cout<< "even" << even <<"odd"<<odd;
}
