#include<iostream>
#include<conio.h>
class DA
{
    public:
    double da;
    void CalcDA(double basic)
    {
        da = 0.7 * basic;
    }
};
class HRA
{
    public:
    double hra;
    void CalcHRA(double basic)
    {
        hra = 0.3 * basic;
    }
};


class PF
{
    public:
    double pf;
    void CalcPF(double basic)
    {
        pf = 0.1 * basic;
    }
};

class GrossSal : public DA, public HRA
{
    public:
    double gs;
    void GS(double basic)
    {
        DA::CalcDA(basic);
        HRA::CalcHRA(basic);
        gs = basic + da + hra;
        cout << "Gross Salary = Rs." << gs << "/-\n";
    }
};


class NetSal : public PF
{
    public:
    double ns;
    void NS(double basic)
    {
        PF::CalcPF(basic);
        ns = basic - pf - 100;
        cout << "Net Salary = Rs." << gs << "/-\n";
    }
};

void main()
{
    clrscr();
    int empId;
    char empName[25];
    long basic;
    cout << "Enter Employee ID: ";
    cin >> empId;
    cout << "Enter Employee Name: ";
    cin >> empName;
    cout << "Enter basic salary of Employee: ";
    cin >> basic;
    GrossSal obj1;
    NetSal obj2;
    obj1.GS(basic);
    obj2.NS(basic);
    getch();
}




