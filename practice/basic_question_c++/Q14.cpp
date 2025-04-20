//14.	WAP to accept marks of 5 subjects. Find total and percentage.

#include <iostream>
using namespace std;

int main(){
    
    float e,h,m,s,st,total,percentage;

    cout<<"enter the marks of subject 1 (out of 100): ";
    cin>>e;
    cout<<"enter the marks of subject 2 (out of 100): ";
    cin>>h;
    cout<<"enter the marks of subject 3 (out of 100): ";
    cin>>m;
    cout<<"enter the marks of subject 4 (out of 100): ";
    cin>>s;
    cout<<"enter the marks of subject 5 (out of 100): ";
    cin>>st;

    total=e+h+m+s+st;
    cout<<"total of all the subjects is: "<<total<<endl;

    percentage=(total/500)*100;

    cout<<"percentage is: "<<percentage<<"% ";


    return 0;
}