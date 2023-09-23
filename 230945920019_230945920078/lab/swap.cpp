#include<iostream>
using namespace std;
int main()
{
	int a = 5, b = 8, temp;
	temp = a;
	a=b;
	b = temp;
	
	cout<<"a = "<<a<<"\t"<<"b = "<<b;
}
