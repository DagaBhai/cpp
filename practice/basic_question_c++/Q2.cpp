//2.	WAP to interchange the value of 2 variables without using 3rd variable.
#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    a=3;
    b=4;
    cout<<"before swap : "<<a<<" and "<<b<<endl;
    
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"after swap : "<<a<<" and "<<b;


    return 0;
}