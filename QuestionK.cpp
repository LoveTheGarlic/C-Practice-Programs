#include<iostream>
using namespace std;

int main()
{
    int n,n1,n2,n3,n4;
    cout<<endl<<"Enter cash to be withdrawn in Hundreds: ";
    cin>>n;

    n1=n/100;
    n=n%100;
    n2=n/50;
    n=n%50;
    n3=n/10;
    n=n%10;
    n4=n/1;
    

    cout<<endl<<"Denomination of 100: "<<n1;
    cout<<endl<<"Denomination of 50: "<<n2;
    cout<<endl<<"Denomination of 10: "<<n3;
    cout<<endl<<"Denomination of 1: "<<n4;


    return 0;

}