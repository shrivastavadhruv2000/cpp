#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number :";
	cin>>a;
	for(int i=2;i<=a/2;i++)
	{
	    if (a%i==0)
		{
			cout<<"it is not a prime number";
			break;
		}
		else
		{
			cout<<"it is a prime number";
			break;
			
		}	
	}
}
