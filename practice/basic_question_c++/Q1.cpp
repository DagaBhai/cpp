//WAP to accept temperature in Celsius and convert it into Fahrenheit. Fahrenheit = (Celsius*9/5+32)

#include <iostream>
using namespace std;

int main(){
    
    float Celsius;
    float Fahrenheit;
    
    
    cout<<"enter the temperature in Celsius: ";
    cin>>Celsius;

    Fahrenheit=((Celsius*9)/(5+32));

    cout<<"The fahrenheit is : "<<Fahrenheit;

    return 0;
}

//2.	WAP to interchange the value of 2 variables without using 3rd variable.

int main(){

    int a;
    int b;
    a=3;
    b=4;
    cout<<"before swap : "<<a<<" and "<<b;
    
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"after swap : "<<a<<" and "<<b;


    return 0;
}