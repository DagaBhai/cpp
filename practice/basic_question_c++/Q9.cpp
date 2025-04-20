//9.	WAP to find Body Mass Index (BMI) of a person.
//BMI=weight in kg/height in meters**2

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float w,h,BMI;

    cout<<"enter the weight in kg: ";
    cin>>w;
    cout<<"enter the height in meter: ";
    cin>>h;

    BMI=w/pow(h,2);

    cout<<"Body Mass Index of the person is: "<<BMI;


    return 0;
}