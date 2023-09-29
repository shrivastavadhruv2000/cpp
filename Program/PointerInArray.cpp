#include<iostream>
using namespace std;

int main()
{
	int a[4] = {23,45,67,54};
	int *b = a;
	cout<<b<<endl;
	cout<<a<<endl;
	cout<<*b<<endl;
	cout<<*(b+1)<<endl;
	cout<<b+1<<endl;
	cout<<&b<<endl;
	cout<<&a;
	
}
