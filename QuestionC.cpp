#include<iostream>
using namespace std;

int main()
{
    float eng,maths,sci,his,geo,agg,per;

    cout<<endl<<"Enter marks for English: ";
    cin>>eng;
    cout<<endl<<"Enter marks for Mathematics: ";
    cin>>maths;
    cout<<endl<<"Enter marks for Science: ";
    cin>>sci;
    cout<<endl<<"Enter marks for History: ";
    cin>>his;
    cout<<endl<<"Enter marks for Geography: ";
    cin>>geo;

    agg=eng+maths+sci+his+geo;
    per=(agg*100)/500;

    cout<<endl<<"Aggregate of the marks: "<<agg;
    cout<<"/500";
    cout<<endl<<"Percentage of the marks: "<<per;

    return 0;
}