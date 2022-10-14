#include<iostream>
using namespace std;
class emp
{
	char name;
	int id;
	int salary;
	public:
		void input();
		void display();
	};
	void emp::input()
	{
		cout<<"enter the employee name=";
		cin>>name;
		cout<<"enter employee id";
		cin>>id;
		cout<<"enter salary";
		cin>>salary;
		}
		void emp::display()
		{
		int b;
		if(salary<=10000)
		{
		b=salary*0.5;
		cout<<"bouns of a employee="<<b;
		cout<<"total salary of a employee\n"<<salary+b;
		}
		else if(salary>10000 and salary<20000)
		{
		b=salary*0.7;
		cout<<"bonus of employee="<<b;
		cout<<"total salary of a employee\n"<<salary+b;
		}
		else if(salary>20000 and salary<30000)
		{
		b=salary*0.1;
		cout<<"bonus of employee\n"<<salary+b;
		}
		else if(salary>30000)
		{
		b=salary*0.2;
		cout<<"bonus of a employee"<<b;
		cout<<"total salary of a employee\n"<<salary+b;
		}
		else
		{
		cout<<"enter valid input";
		}
		}
		int main()
		{
		emp e;
		e.input();
		e.display();
		return 0;
		}
