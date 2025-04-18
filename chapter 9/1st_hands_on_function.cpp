#include <iostream>
using namespace std;

//function that takes a single parameter and doesnt
//give back the result explicitly
void enter_bar(size_t age){
    if(age>18){
        cout<<"your "<< age<< "years old. please proceed"<<endl;
    }    
    else{
        cout<<"sorry your too young"<<endl;
    }
    return;
}

int max(int a ,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

void say_hello(){
    cout<<"Hello there"<<endl;
    return;
}

int lucky_number(){
    return 99;
}

double increment_multiply(double a , double b){
    cout<<"Inside function, before increment : "<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    double result=((++a)*(++b));

    cout<<"Inside function, after increment : "<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return result;
}

int main()
{
    /*
    //enter_bar(22);

    for(size_t i{1}; i<20; ++i){
    
        enter_bar(i);
    }
    return 0;
    
    int x;
    int y;
    cout<<"enter the 1st value : ";
    cin>>x;
    cout<<"enter the 2nd value : ";
    cin>>y;

    int result=max(10,20);
    result=max(x,y);
    cout<<"max : "<<result<<endl;
    


    //say_hello();
    int result {};
    result=lucky_number();
    cout<<"result : "<<result<<endl;
    */

    double a{20};
    double b{10};
    
    cout<<"outside function, before increment : "<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    double incr_mult_result = increment_multiply(a,b);

    cout<<"outside function, after increment : "<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}
