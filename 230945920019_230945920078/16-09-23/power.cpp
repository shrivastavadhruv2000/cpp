#include<iostream>
using namespace std;
int main(){
	int pow, base,res=1;
	cout<<"enter base and power";
	cin>>base>>pow;
	for(int i=0; i<pow; i++)
		res= res*base;
	cout<<res;
}
