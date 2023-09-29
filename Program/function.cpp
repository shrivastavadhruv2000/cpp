#include<iostream>
using namespace std;
int sum(int, int);
int main()
{
	int a, b;
	cin>>a;
	cout<<endl;
	cin>>b;
	cout<<endl;
	cout<<sum(a,b);
}
int sum(int num1,int  num2)
{
	int c;
	c = num1 + num2;
	return c;
}
