#include<iostream>
using namespace std;
class biggest
{
	int x,y;
	public:
		int input();
		int display();
	};
	int biggest::input()
	{
		cout<<"Enter the first number:";
		cin>>x;
		cout<<"Enter the second number:";
		cin>>y;
		}
		int biggest::display(){
		
		if(x>y){
			cout<<"x is the biggest number."<<endl;
			}
			else{
			cout<<"y is the biggest number.";
			}
			}
			int main(){
			biggest a;
			a.input();
			a.display();
			return 0;
			}
			
		
	

