#include<iostream>
using namespace std;
int main(){
	int max=0, a[10];
	cout<<"enter array";
	for(int i=0;i<10; i++){
		cin>>a[i];
	}
	for(int i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<max;
}
