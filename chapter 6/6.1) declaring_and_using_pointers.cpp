#include <iostream>
using namespace std;

int main(){

    //declare and initialize pointer
    int *p_number1{}; //will initialize with nullptr
    double *p_fractional_number1{nullptr};

    cout<<"sizeof(int) : "<<sizeof(int)<<endl;
    cout<<"sizeof(double) : "<<sizeof(double)<<endl;
    cout<<"sizeof(double*) : "<<sizeof(double*)<<endl;
    cout<<"sizeof(int*) : "<<sizeof(int*)<<endl;
    cout<<"sizeof(p_number1) : "<<sizeof(p_number1)<<endl;
    cout<<"sizeof(p_fractional_number1) : "<<sizeof(p_fractional_number1)<<endl;

    //It doesn't matter if you put the * close the data type or to variable name
    int* p_number2{nullptr};
    int *p_number3{nullptr};
    int  *p_number4{nullptr};

    int* p_number5{nullptr},other_int_var{};//confusing

    //its better to seprate these declarations on different lines
    int *p_number6{};
    int other_int_var1{};

    //initializing pointer and assigning them data
    //we know that pointer store addresses of variable
    int int_var{43};
    int  *p_int{&int_var}; //the address of operator (&);

    cout<<"int var : "<<int_var<<endl;
    cout<<"p_int(address in memory) : "<<p_int<<endl;

    //you can also change the address stored in a pointer any time 
    int int_var1{65};
    p_int = &int_var1; // Assign a different address to the pointer
    cout<<"p_int (with different addresss) : "<<p_int<<endl;

    //can't cross assign between pinters of different types
    int *p_int1{nullptr};
    double double_var{33};

    //p_int = &double_var; //compiler error

    //dereferencing a pointer :
    int *p_int2{nullptr};
    int int_data{56};
    p_int2=&int_data;

    cout<< "value : "<< *p_int2<<endl; //dereferencing a pointer

    
    return 0;
} 