//4.	WAP to find compound interest and simple interest.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float A,P,r,S;
    int n;
    float t;

    cout<<"enter the principle deposit : ";
    cin>>P;
    cout<<"enter the rate deposit : ";
    cin>>r;
    cout<<"enter the number of years: ";
    cin>>n;
    cout<<"enter the time in years: ";
    cin>>t;

    float rate=r/100;
    
    //COMPOUND INTEREST
    A=P*pow(1+(rate/n),n*t);
    float CI=A-P;

    cout<<"total amount using compound interest : "<<A<<endl;
    cout<<"compound interest : "<<CI<<endl;
    
    //SIMPLE INTERESET 
    S=P+((P*r*t)/100);
    float SI=S-P;

    cout<<"total amount using simple interest : "<<S<<endl;
    cout<<"simple interest : "<<SI;


    return 0;
}