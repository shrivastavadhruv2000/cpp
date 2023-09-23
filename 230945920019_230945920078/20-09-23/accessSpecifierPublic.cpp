#include<iostream>
using namespace std;
class A{
	int c;
	public: int a;
		    int b;
	public :
		void display(){
			cout<<" in a display";
		}
};

class B: public A{
	public:
		void show(){
			cout<< a<< b<<endl;
		}
};

class C: public B{
	public : void show(){
		cout <<a << b;
	}
};

int main(){
	B bobj;
	bobj.show();
	C cobj;
	cobj.show();
}			
