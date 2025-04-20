//15.	WAP to find area of circle if diameter is given by user.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float r,d,area;

    cout<<"enter the diameter of a circe: ";
    cin>>d;

    r=d/2;

    area=M_PI*pow(r,2);

    cout<<"area of circle is: "<<area;

    return 0;
}
