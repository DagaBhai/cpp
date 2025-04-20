//3.	Write a Program to check whether a number is negative, positive or zero.

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter number: ";
    cin>>num;

    if(num>0){
        cout<<"this number is positive";
    }
    else if(num<0){
        cout<<"this number is negative";
    }
    else{
        cout<<"this number is zero";
    }

    return 0;
}