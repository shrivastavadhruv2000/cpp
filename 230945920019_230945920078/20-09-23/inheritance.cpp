#include<iostream>
using namespace std;
class A{
	public :
		A(){
			cout<<" in default a"<<endl;
		}
		void display(){
			cout<<"in display a"<<endl;
		}
};
class B{
	public:
		B(){
			cout<<" in default b"<<endl;
		}
		void display(){
			cout<<" in display b"<<endl;
		}
};
int main(){
	B bobj;
	bobj.display();
}
