 #include<iostream>
using namespace std;
class student{
	int reg,mark1,mark2,mark3,total,avg,c,a;
	float d;
	string name;
	public:
		void getdata();
		void calculation();
		void display();
};
void student::getdata(){
	cout<<"enter the register number:";
	cin>>reg;
	cout<<"enter the name:";
	cin>>name;
	cout<<"enter the mark1:";
	cin>>mark1;
	cout<<"enter the mark2:";
	cin>>mark2;
	cout<<"enter the mark3:";
	cin>>mark3;
}
void student::calculation(){
	
	c=mark1+mark2+mark3;
	d=c/3;
}
void student::display(){
	cout<<"name"<<name<<endl;
	cout<<"register number"<<reg<<endl;
	cout<<"the total marks obtained by student:"<<c<<endl;
	cout<<"average marks obtained:"<<d<<endl;
	if(d>90){
		cout<<"S grade";}
	else if(d>80){
		cout<<"A grade";}
	else if(d>70){
		cout<<"B grade";}
	else if(d>60){
		cout<<"C grade";}
	else if(d>50){
		cout<<"D grade";}
	else{
		cout<<"failed";
	}
}
int main(){
	student a;
	a.getdata();
	a.calculation();
	a.display();
	return 0;
}

