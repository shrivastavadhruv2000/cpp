#include<iostream>
using namespace std;
class A{
	int a;
	public :
		A(){
			cout<<" in default a"<<endl;
		}
		A(int a){
			cout<< " in para of A"<<endl;
			this->a=a;
		}
		void display(){
			cout<<"in display a"<<endl;
			cout<<" a="<<a<<endl;
		
		}
};
class B: public A{
	int b;
	public:
		B(){
			cout<<" in default b"<<endl;
		}
		B(int b): A(10){
			cout<<" in para of B"<<endl;
			this->b=b;
		}
		void display(){
			A::display();
			cout<<" in display b"<<endl;
			cout<<b;
		}
};
int main(){
	B bobj(20);
	bobj.display();
	cout<<sizeof(bobj);
}
