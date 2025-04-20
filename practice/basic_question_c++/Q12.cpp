//12.	WAP to find cube of a number.

#include <iostream>
using namespace std;

int main(){
    int num,cube;
    
    cout<<"enter number: ";
    cin>>num;

    cube=num;

    for(size_t i{0};i<2;++i){
        cube=cube*num;
    }
    cout<<"cube of the number is: "<<cube;

    return 0;
}