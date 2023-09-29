#include<iostream>
using namespace std;
int money(int m,float y = 1.04)
{
	int recived;
	recived = m*y;
	return recived;
}
int main()
{
	int amount = 100000;
	cout<<money(amount)<<endl;
	cout<<money(amount, 1.1);
}
