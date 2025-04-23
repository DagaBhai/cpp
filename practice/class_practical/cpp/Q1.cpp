/*
Write a program to compute the sum of the first n terms of the following series: 
S=1-1/2^2+1/3^3....1/n^n
The number of terms n is to be taken from the user through the command line. If the 
command line argument is not found then prompt the user to enter the value of n. 
*/

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double S=0,n;
    cout<<"enter the nth term: ";
    cin>>n;

    for(size_t i{1};i<=n;++i){
        double ser=(1/pow(i,i));
        if(i%2==0){
            S-=ser;
        }
        else{
            S+=ser;
        }
    }

    cout<<S;


    return 0;
}