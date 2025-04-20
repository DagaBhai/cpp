//6.	WAP to find reverse of 2 digit number.

#include <iostream>
using namespace std;

int main(){
    int num,reverse=0;
    cout<<"enter the num: ";
    cin>>num;
    cout<<"before the reverse: "<<num<<endl;
    while(num>0){
        float start=num%10;
        reverse= reverse*10+start;
        num=num/10;
    }

    cout<<"after the reverse: "<<reverse;
}