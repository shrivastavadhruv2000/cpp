#include<iostream>
using namespace std;
//void swap(int *x, int *y);
void swap(int &a, int &b);
	
int main()
{
	int a = 3, b = 5;
	//swap(&a,&b);
	swap(a,b);
	cout<<"a = "<<a<<endl<<"b = "<<b;
	return 0;
}
/*void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}*/

void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	
}


