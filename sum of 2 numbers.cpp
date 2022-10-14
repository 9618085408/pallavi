#include<iostream>
using namespace std;
class add
{
	int x,y;
	public:
		void input();
		void display();
	};
	void add::input()
	{
		cout<<"Enter x and y value";
		cin>>x>>y;
		}
		void add::display()
		{
		cout<<"sum of 2 no's"<<x+y;
		}
		int main()
		{
		add a;
		a.input();
		a.display();
		}
