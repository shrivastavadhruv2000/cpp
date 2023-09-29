#include<iostream>
using namespace std;
int product(int x, int y);
int main()
{
	int a= 1,b= 2;
	cout<<product(a,b)<<endl;
	cout<<product(a,b)<<endl;
	cout<<product(a,b);
}
int product(int x, int y)
{
	static int c = 0;
	c= c+1;
	return x*y+c;
}
