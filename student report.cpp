#include<iostream>
using namespace std;
class  student
{
	char name[],regd[],m1,m2,m3;
	public:
		void input();
		void display();
	};
	void student::input()
	{
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter Regdno:";
		cin>>regd;
		cout<<"Enter Mark 1:";
		cin>>m1;
		cout<<"Enter Mark 2:";
		cin>>m2;
		cout<<"Enter Mark 3:";
		cin>>m3;
		}
		void student::display()
		{
		cout<<"\nName:"<<name;
		cout<<"\nRegdno:"<<regd;
		cout<<"\nMark 1:"<<m1;
		cout<<"\nMark 2:"<<m2;
		cout<<"\nMark 3:"<<m3;
		}
		int main()
		{
		student s;
		s.input();
		s.display();
		}
