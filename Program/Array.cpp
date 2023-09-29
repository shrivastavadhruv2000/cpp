#include<iostream>
using namespace std;
int main()
{
	int marks[4] = {34,54,65,76};
	//using for loop
	for(int i= 0;i<4;i++)
	{
		cout<<marks[i]<<endl;
	}
	//using while loop
	
	int i = 0;
	/*while(i<4)
	{
		cout<<marks[i]<<endl;
		i++;
	}*/
	
	//using do while loop
	
	do{
		cout<<marks[i]<<endl;
		i++;
	}while(i<4);
}
