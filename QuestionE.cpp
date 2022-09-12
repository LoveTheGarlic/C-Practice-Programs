#include<iostream>
using namespace std;

int main()
{
    float l,b,a,p;

    cout<<endl<<"Enter Length of the Rectangle in meters: ";
    cin>>l;
    cout<<endl<<"Enter Breadth of the Rectangle in meters: ";
    cin>>b;

    a=l*b;
    p=(2*l)+(2*b);

    cout<<endl<<"Area of the Rectangle is: "<<a<<" sq meters";
    cout<<endl<<"Perimeter of the Rectangle is: "<<p<<" meters";

    return 0;

}