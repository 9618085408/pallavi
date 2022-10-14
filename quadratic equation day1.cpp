#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d,root1,root2;
	cout<<"enter the values of a,b and c=";
	cin>>a>>b>>c;
	d=sqrt((b*b)-(4*a*c));
	root1=(b+b)/2*a;
	root2=(b-d)/2*a;
	cout<<"root1"<<root1;
	cout<<"root2"<<root2;
	}
