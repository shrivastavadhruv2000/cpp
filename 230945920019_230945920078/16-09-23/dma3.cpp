#include<iostream>
using namespace std;
class Demo{
	int a;
	public :
		Demo(){
			a=5;
		}
		int add(int x){
			this->a = this->a +x;
			return this->a;
		}
	
};
int main(){
	Demo d;
	cout<< "result"<< d.add(10);
	
}
