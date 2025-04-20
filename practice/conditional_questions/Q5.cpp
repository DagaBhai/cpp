//5.	Write a Program to check whether a number is even or odd.

#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"enter number: ";
    cin>>num;

    switch(num%2){
        case 1:
            cout<<"this number is odd";
            break;
        case 0:
            cout<<"this number is even";
            break;
    }

    return 0;
}