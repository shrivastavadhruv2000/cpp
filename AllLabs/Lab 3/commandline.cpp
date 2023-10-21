#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
//	cout<<"enter an argc = ";
//	cin>>argc
	cout << " arguments:"<< "\n";
	for (int i = 0; i <=argc; i++)
	{
		cout<<argv[i];
	
	}
	return 0;
}
