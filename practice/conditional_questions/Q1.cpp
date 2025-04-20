//1.	Write a Program to find maximum between two numbers.

#include <iostream>
using namespace std;

int main(){

    int max,a,b;

    cout<<"enter 1st number: ";
    cin>>a;
    cout<<"enter 2ns number: ";
    cin>>b;

    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    cout<<"max number out of these 2 number is: "<<max;

    return 0;
}