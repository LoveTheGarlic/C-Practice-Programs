#include<iostream>
using namespace std;

int main()
{
    int n,n1,n2,n3,n4,add;

    cout<<endl<<"Enter a 4 digit number: ";
    cin>>n;

    n1=n/1000;
    n=n%1000;
    n2=n/100;
    n=n%100;
    n3=n/10;
    n=n%10;
    n4=n/1;

    add=n1+n4;

    cout<<endl<<"The addition is: "<<add;

    return 0;

}