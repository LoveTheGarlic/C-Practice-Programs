#include<iostream>
using namespace std;

int main()
{
    float tsp,p,c;

    cout<<endl<<"Total selling price of 15 commodities: ";
    cin>>tsp;

    cout<<endl<<endl<<"Total profit earned on the commodities: ";
    cin>>p;

    c=(tsp-p)/15;

    cout<<endl<<endl<<"Cost of one commodity: Rs "<<c;

    return 0;

}