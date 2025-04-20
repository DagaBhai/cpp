//2.	Write a Program to find maximum between three numbers.

#include <iostream>
using namespace std;

int main(){

    int a,b,c,max;

    cout<<"enter 1st number: ";
    cin>>a;
    cout<<"enter 2ns number: ";
    cin>>b;
    cout<<"enter 3rd number: ";
    cin>>c;

    if(a>b && a>c){
        max=a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else{
        max=c;
    }

    cout<<"max number out of these 3 number is: "<<max;

    return 0;
}