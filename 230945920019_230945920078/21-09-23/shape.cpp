#include<iostream>
using namespace std;
class shape{
	float area;
	public : 
		virtual float findArea(){
			return area;
		}
		virtual void display(){
			cout<<" area ="<<area;
		}
};
class sqr: public shape{
	float length,area;
	public:
		float findArea(float length){
			area= length * length;
			return area;
		}
		void display(){
			//cout<<" area ="<<area<<endl;
		}
	
};
class rect:public shape{
	float length, breadth,area;
	public:
		float findArea(float length, float breadth){
			area= length *breadth;
			return area;
		}
		void display(){
			//cout<<" area ="<<area<<endl;
		}
};

int main(){
	rect r1;
	cout<<r1.findArea(10,30)<<endl;
	r1.display();
	
	sqr s1;
	cout<<s1.findArea(10)<<endl;
	s1.display();
}
