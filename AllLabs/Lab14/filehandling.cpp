
#include<iostream>
#include<fstream>

using namespace std;
main()
{
	int rno,fee;
	char name[50];

	cout<<"Enter the Roll Number:";
	cin>>rno;
	
	cout<<"\nEnter the Name:";
	cin>>name;
	
	cout<<"\nEnter the Fee:";
	cin>>fee;

	ofstream fout("c:/student.txt");

	fout<<rno<<"\t"<<name<<"\t"<<fee; 
	fout.close();

	ifstream fin("c:/student.txt");

	fin>>rno>>name>>fee; 

	fin.close();

	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

	return 0;
}

