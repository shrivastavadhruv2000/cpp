#include<iostream>
using namespace std;
class Complex{
	int real, img;
	public:
		void get(){
			cout<<"enter real and img";
			cin>> real>> img;
		}
		void put(){
			cout<<" complex no is"<<real<< "+"<<img<<"i"<<endl;
		}
};

int main(){
	int n, i;
	cout<<"enter n";
	cin>>n;
	Complex * ptr = new Complex[n];
	for(int i=0; i< n; i++){
		ptr[i].get();
	}
	for(i=0;i<n; i++){
		ptr[i].put();
	}
	
}
