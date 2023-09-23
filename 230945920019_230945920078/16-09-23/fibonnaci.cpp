#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c;
	cout<<a<<b;
	for(int i=1;i<=5;i++)
	{
		c = a+b;
		a = b;
		b = c;
		cout<<c;
	}
	
	
}
