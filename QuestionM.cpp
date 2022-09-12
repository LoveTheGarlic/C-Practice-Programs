#include<iostream>
using namespace std;

int main()
{
    int n,n1,n2,n3,n4,n5;

    cout<<endl<<"Enter a 5 Digit number: ";
    cin>>n;

    n1=n/10000;
    n=n%10000;
    n2=n/1000;
    n=n%1000;
    n3=n/100;
    n=n%100;
    n4=n/10;
    n=n%10;
    n5=n/1;

    n1=n1+1;
    n2=n2+1;
    n3=n3+1;
    n4=n4+1;
    n5=n5+1;

    cout<<endl<<"New number: "<<n1<<n2<<n3<<n4<<n5;

    return 0;
}