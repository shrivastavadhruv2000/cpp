#include<iostream>
using namespace std;

class Student{
	int m1, m2, sumStudent;
	public:
		Student(int m1, int m2){
			this->m1 =m1;
			this->m2 =m2;
			sumStudent= m1+m2;
		}
		int getSumStudent(){
			return sumStudent;
		}
};

class Sports{
	int s1,s2,sumSports;
	public:
		Sports(int s1, int s2){
			this->s1 =s1;
			this->s2 =s2;
			sumSports= s1+s2;
		}
		int getSumSports(){
			return sumSports;
		}
};

class Result:public Sports, public Student{
	int total = Sports::getSumSports() + Student::getSumStudent();
	public :
		float avg= (float) (total/4);
		void show(){
			cout<<"avg marks = "<<avg;
		}
	
	
};

int main(){
	int a, b, c,d;
	Student s;
	Sports s1;
	Result r;
	cout<<"enter the students marks"<<endl;
	cin>>a>>b;
	s.Student(a,b);
	cout<<"enter the sports marks"<<endl;
	cin>>c,d;
	s1.Sports(c,d);
	
	cout<<"avg marks"<<r.show();
	
	
}
