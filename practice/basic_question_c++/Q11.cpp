//11.	WAP to find area and circumference of a circle.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float r,A,C;

    cout<<"enter the radius: ";
    cin>>r;

    A=M_PI*pow(r,2);
    cout<<"area of circle is: "<<A<<endl;

    C=2*M_PI*r;
    cout<<"circumference of circle is: "<<C;

    return 0;
}