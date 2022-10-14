#include<iostream>
using namespace std;
class binary
{
	private:
	long int octalnum,p=1;
	long int dec=0,i=1,j,d;
	long int binno=0;
	public:
	 binary()
	 {
    	cout<<"Enter an octal number to convert: ";
	    cin>>octalnum;
	 }
	 int cal()
	 {
	 		for(j=octalnum;j>0;j=j/10)
	{
		d=j%10;
		if(i==1)
		{
			p=p*1;
		}
		else
		{
			p=p*8;
		}
		dec=dec+(d*p);
		i++;
	}
	i=1;
	for(j=dec;j>0;j=j/2)
	{
		binno=binno+(dec%2)*i;
		i=i*10;
		dec=dec/2;
	}
	cout<<"Octal number "<<octalnum<<" equivalent to Binary "<<binno;
	 }
	 
};
int main()
{
	binary b;
	b.cal();
}
