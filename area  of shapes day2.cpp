#include<iostream>
using namespace std;
class area
{
	int breadth,height,radius,side,area;
	public:
		void input();
	    void rectangle();
	    void circle();
	    void square();
	};
	void area::input()
	{
		cout<<"enter breadth=";
		cin>>breadth;
		cout<<"enter height=";
		cin>>height;
		cout<<"enter radius=";
		cin>>radius;
		cout<<"enter side=";
		cin>>side;
		}
		void area::rectangle()
		{
		area=breadth*height
		cout<<"area of rectangle="<<area;
		}
		void area::circle()
		{
		cout<<"enter radius of detremine the area of circular path\n";
		cin>>radius;
		area=3.14*radius*radius
		}
		void area::square()
		{
			cout<<"area of square="<<area;
			cin>>side;
			area=side*side
		}
    	int main()
    	{
    		int x=2,y=3,z=4;
    		area(x,y,z);
			area(2.6f,3.0f);
			area(x);
			return 0;
			}
