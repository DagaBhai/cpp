//3.	WAP to accepts time in seconds and convert it into hours, minutes and seconds.

#include <iostream>
using namespace std;

int main(){

    int sec;
    int min;
    int hour;

    cout<<"enter time in seconds : ";
    cin>>sec;

    if(sec>=3600){
        hour=sec/3600;
        sec=sec%3600;
    }
    if(sec>=60){
        min=sec/60;
        sec=sec%60;
    }
    else{

    }

    cout<<"time in hh:mm:ss is "<<hour<<":"<<min<<":"<<sec;

    return 0;
}











