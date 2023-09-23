#include<iostream>
using namespace std;
int main(){
	int a,b,c,d, e, sum, avg;
	for(int i =0; i<5; i++){
		for(int j=0; j< 5; j++){
			cout<<"enter marks";
			cin>>a>>b>>c>>d>>e;
			avg=(a+b+c+d+e)/5;
			cout<<avg<<endl;
		}
	}	
}
