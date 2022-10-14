#include<iostream>
using namespace std;
int main()
{
	int n,i,j,p=0;
	cout<<"enter an integer=";
	cin>>n;
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	{
	p+=i;
	}
	}
	if(p==n)
	{
	cout<<n<<"is  a perfect number";}
	else{
	cout<<n<<"is not a perfect numebr";
	}
	return 0;
	}
