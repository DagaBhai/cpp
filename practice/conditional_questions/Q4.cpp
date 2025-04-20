//4.	Write a Program to check whether a number is divisible by 5 and 11 or not.

#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"enter number: ";
    cin>>num;

    if (num%5==0 && num%11==0){
        cout<<"this number is divisible by 5 and 11";
    }
    else{
        cout<<"this number is not divisible by 5 and 11";
    }

    return 0;
}