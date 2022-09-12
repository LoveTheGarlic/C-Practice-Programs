#include<iostream>
using namespace std;

int main()
{
    float f,c;

    cout<<endl<<"Enter the temperature in Fehrenheit: ";
    cin>>f;

    c=(f-32)/1.8;

    cout<<endl<<"The temperature in Celcius is: "<<c;

    return 0;

}