//13.	WAP to find square root of a number.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float num,root;
    cout<<"enter number: ";
    cin>>num;

    root=sqrt(num);
    cout<<"square root of a number "<<num<<" is: "<<root;
    
    return 0;
}