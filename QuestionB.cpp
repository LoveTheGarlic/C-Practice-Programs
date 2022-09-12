#include<iostream>
using namespace std;

int main()
{
    
    float a,m,f,i,c;

    cout<<endl<<"Enter distance between two cities in KMs=";
    cin>>a;

    m=a*1000;
    f=a*3280.84;
    i=a*39370.1;
    c=a*10000;

    cout<<endl<<"Distance between two cities is "<<a;
    cout<<"Kms";

    cout<<endl<<"Distance in Meters between two cities="<<m;
    cout<<"m";
    cout<<endl<<"Distance in Feet between two cities="<<f;
    cout<<"ft";
    cout<<endl<<"Distance in Inches between two cities="<<i;
    cout<<"in";
    cout<<endl<<"Distance in Centimeters between two cities="<<c;
    cout<<"cm";

    return 0;
}