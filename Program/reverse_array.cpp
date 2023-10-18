#include<iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n = 0;
    cout<<"enter the number of integers: ";
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    for(int j=n-1;j>=0;j--)
    {
        cout<<arr[j]<<"\t";
    }
    return 0;
}