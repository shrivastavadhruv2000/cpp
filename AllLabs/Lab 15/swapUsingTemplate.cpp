/*"	Assignments on templates*/

#include<iostream>
using namespace std;

template <class T>
void swap1(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
	cout<<"After Swap : "<<a<<" "<<b<<endl;
}

int main()
{
	int a=4;
	int b=5;
	cout<<"Before swap :"<<a<<" "<<b<<endl;
	swap1(a,b);
}
