#include<iostream>
using namespace std;
int main()
{
	int a,b,x=1,sum=0,y;
	cout<<"enter the number: "<<endl;
	cin>>a;
	y = a;
	while(a!=0){
	b = a%10;
	x = b*b*b;
	sum = sum+x;
	a = a/10;
	}
	if (sum==y)
	{
		cout<<"it is an armstrong number";
	}
	else
	{
		cout<<"it is not an armstrong number";
		
	}
	
	
	
}
