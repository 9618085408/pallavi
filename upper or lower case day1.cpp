#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[]={"hello"};
	cout<<"input is"<<a;
	for(int x=0;x<strlen(a);x++)
	{
		putchar(toupper (a[x]));
		}
		return 0;
		}
		
