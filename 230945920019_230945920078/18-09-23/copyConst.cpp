#include<iostream>
using namespace std;
class date{
	int dd, mm, yy;
	public :
		void show();
		date (int, int , int);
};

void date :: show(){
	cout<< dd<< mm << yy<<endl;
}
date :: date(int d, int m, int y){
	dd= d;
	mm= m;
	yy= y;
}

int main(){
	date d(2,3,33);
	date d1(d);
	d1.show();
	d.show();
}
