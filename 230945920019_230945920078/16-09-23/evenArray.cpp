#include<iostream>
using namespace std;
int main(){
	int max=0, a[10],b[5];
	cout<<"enter array";
	for(int i=0;i<10; i++){
		cin>>a[i];
	}
	for(int i=0;i<10;i++){
		if(a[i]%2==0){
			b[i]=a[i];
			cout<<b[i];
		}
	}
	//cout<<b;
}
