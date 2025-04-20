//8.	WAP to find sum of second and second last digit in 4 digits number.

#include <iostream>
using namespace std;


int main(){
    int number_len=4;
    int sum,number;
    int fullnumber=0;
    for(size_t i{0}; i<number_len ; ++i){
        cout<<"enter "<<i<<"th term of the number: ";
        cin>>number;
        fullnumber=number+fullnumber*10;
    }

    sum=((fullnumber/100)%10)+((fullnumber%100)/10);
    cout<<"sum of the 1st and last digit is: "<<sum;

    return 0;
}