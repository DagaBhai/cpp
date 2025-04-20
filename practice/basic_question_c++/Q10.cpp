//10.	WAP to find area of a triangle.

#include <iostream>
using namespace std;

int main(){
    float h,b,area;

    cout<<"enter the height: ";
    cin>>h;
    cout<<"enter the base: ";
    cin>>b;

    area=0.5*h*b;

    cout<<"area of a triangle: "<<area;

    return 0;
}