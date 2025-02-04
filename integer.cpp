#include <iostream>
using namespace std; 

int main(){
    int number1=15; //decimal
    int number2=017; //octal
    int number3=0x0F; //hexadecimal
    int number4=0b00001111; //binary

    std::cout<<"number 1 : "<<number1<<std::endl;
    std::cout<<"number 2 : "<<number2<<std::endl;
    std::cout<<"number 3 : "<<number3<<std::endl;
    std::cout<<"number 4 : "<<number4<<std::endl;

    return 0;
}