#include<iostream>
using namespace std;

int main()
{
    int da,ha;
    float bs,gs;

    cout<<endl<<"Enter Ramesh's Basic Salary=";
    cin>>bs;

    da=(bs*40)/100;
    ha=(bs*20)/100;
    gs=bs+da+ha;

    cout<<endl<<"Ramesh's gross salary="<<gs;

    return 0;

}