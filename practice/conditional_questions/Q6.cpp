//6.	Write a Program to check whether a year is leap year or not.

#include <iostream>
using namespace std;

int main(){

    int year;
    cout<<"enter the year: ";
    cin>>year;

    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"this is a leap year";
            }
            else{
                cout<<"this is not a leap year";
            }
        }
        else{
            cout<<"this is a leap year";
        }
    }
    else{
        cout<<"this is not a leap year";
    }
    return 0;
}
