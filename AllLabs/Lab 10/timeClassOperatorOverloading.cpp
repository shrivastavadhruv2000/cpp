#include<iostream>
using namespace std;

class Time
{
	int hh,mm,ss;
	public:
		Time();
		Time(int,int,int);
		void Timedisplay();
		friend void operator+(Time&,int);
		friend void operator-(Time&,int);
};

Time::Time()
{

}

Time::Time(int h,int m,int s){
	cout<<"Have a good day!"<<endl;
	hh=h;
	mm=m;
	ss=s;
	
}

void Time::Timedisplay(){
	cout<<"Current time is :"<<endl;
	cout<<hh<<"/"<<mm<<"/"<<ss<<endl;
}

void operator+(Time &t1,int x)
{
    t1.hh=t1.hh+x;
	t1.mm=t1.mm;
	t1.ss=t1.ss;

}

void operator-(Time &t1,int x)
{
    t1.hh=t1.hh-x;
	t1.mm=t1.mm;
	t1.ss=t1.ss;
	

}

int main()
{
	Time t1(13,44,53);
	t1.Timedisplay();
	
	t1+5; 
	t1.Timedisplay();
	
	t1-5; 
	t1.Timedisplay();
}
