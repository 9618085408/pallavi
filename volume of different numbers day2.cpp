#include<iostream>
using namespace std;
int volume(int b,int h,int l)
{
	int volume;
	volume=b*h*l;
	cout<<"volume of triangle"<<volume<<endl;
	}
	int volume(float r,float h)
	{
	int volume;
	volume=3.14*r*r*h;
	cout<<"volume of cylinder"<<volume<<endl;
	}
	int volume(int a)
	{
	int volume;
	volume=a*a*a;
	cout<<"volume of square"<<volume<<endl;
	}
	int main()
	{
	int x=2,y=3,z=4;
	volume(x,y,z);
	volume(2.6f,3.0f);
	volume(x);
	return 0;
	}
