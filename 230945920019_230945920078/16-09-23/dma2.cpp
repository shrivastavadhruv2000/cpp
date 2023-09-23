#include<iostream>
using namespace std;
class complex
{
	public:
		void show()const
		{
			cout<<"bye";
		}
		void show()
		{
			cout<<"hello";
			
		}
};
int main()
{
	complex c1 ;
	const complex c2;
	c2.show(); 
	c1.show();
	return 0;
}
