#include<iostream>
using namespace std;
#include<string.h>

class String1
{
	int len;
	char* ptr;
	public:
		void show();
		String1(char*);
		~String1();
};

void String1::show()
{
	cout<<"the length is "<<len<<endl;
	cout<<"the string is "<<ptr<<endl;
}
String1::String1(char* sptr)
{
	len= strlen(sptr);
	ptr= new char[len+1];
	strcpy(ptr,sptr);
}
String1::~String1()
{
	cout<<"destructor is called"<<endl;
	if(ptr)
	   delete[] ptr;
	ptr=NULL;
}

int main()
{
	String1 s1("omkar");
	s1.show();
	{
		String1 s2(s1);
		s2.show();
		s2.~String1();
	}
	s1.show();
}
