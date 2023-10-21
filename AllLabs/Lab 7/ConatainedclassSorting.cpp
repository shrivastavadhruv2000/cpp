/* "	Write a Student class and use it in your program. Store the data of 10 students and display
 the sorted data according to their roll numbers, dates of birth, and total marks.*/

#include<iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	public:
		Date();
		void get();
		void put();
};

 Date::Date()
{
   // cout<<"In Date Class !"<<endl;
}



void Date::put(){
	cout<<"Enter date :"<<endl;
	cin>>dd;
	cin>>mm;
	cin>>yy;
}
void Date::get()
{
	cout<<"Date is "<<endl;
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}


class Student
{
	int rollNo;
	char name[10];
	Date d1;
	public:
		Student();
		void get();
		int getRollNo();
		void put();
};

Student::Student()
{ 
    // cout<<"In default of student "<<endl;
}
void Student::put()
{
	cout<<"Enter student data :"<<endl;
	cout<<"Enter roll No"<<endl;
	cin>>rollNo;
	cout<<"Enter Name"<<endl;
	cin>>name;
	d1.put();
}

int Student::getRollNo()
{
	return this->rollNo;
}
void Student::get()
{
	cout<<"Roll No :"<<rollNo<<" "<<"Name of student :"<<name<<endl;
	d1.get();
}

int main()
{
	int n;
	cout<<"Enter the number student"<<endl;
	cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
	{
    	s[i].put();
    }
    
    for(int i=0;i<n;i++)
    {
    	s[i].get();
	}
	
	cout<<"After Sorting the Data !"<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i].getRollNo()>s[j].getRollNo())
			{
				Student temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
    {
    	s[i].get();
	}
}
