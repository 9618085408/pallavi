#include<iostream>
using namespace std;
void welcome(int c,int d)
{
	int add,sub,mul,modu;
	float div;
	cout<<"add"<<c+d;
	cout<<"sub"<<c-d;
	cout<<"mul"<<c*d;
	cout<<"div"<<c/d;
	cout<<"modu"<<c%d;
	}
	int main()
	{
	int a=5,b=6;
	welcome(a,b);
	return 0;
}
