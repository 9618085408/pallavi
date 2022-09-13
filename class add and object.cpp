#include<iostream>
using namespace std;
	class add
	{
		int x,y;
	public:
		int input();
		int display();
};
int add::input()
{
	cout<<"Enter x and y value";
	cin>>x>>y;
}
	int add::display()
	{
		cout<<"sum of two numbers"<<x+y;
		}
		int main()
		{
		add a;
		a.input();
		a.display();
	}



