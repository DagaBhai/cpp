#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare and initialize variables
    float number1 {1.2345678901234567890f}; //precision : 7
    double number2 {1.2345678901234567890}; //precision : 15
    long double number3 {1.2345678901234567890L}; //precision : 20

    cout << setprecision(20);  // Ensures high precision

    cout << "number1 (float) : " << number1 << endl;
    cout << "number2 (double) : " << number2 << endl;
    cout << "number3 (long double) : " << number3 << endl;

    cout << "size of float : " << sizeof(float) << " bytes" << endl;
    cout << "size of double : " << sizeof(double) << " bytes" << endl;
    cout << "size of long double : " << sizeof(long double) << " bytes" << endl;

    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion
    float number4_para(192400023.0f);
    float number4_curl{192400023.0};

    cout << "number4 : " << number4 << endl;
    cout << "number4 in () : " << number4_para << endl;
    cout << "number4 in {} : " << number4_curl << endl;

    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    cout << "-------------------------" << endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};           // Can ommit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    cout << "number5 is : " << number5 << endl;
    cout << "number6 is : " << number6 << endl;
    cout << "number7 is : " << number7 << endl;
    cout << "number8 is : " << number8 << endl;
    cout << "number9 is : " << number9 << endl;

     //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    
    
    cout << number10 << "/" << number11 << "  yields " << result << endl;
    cout << result << " + " << number10 << " yields " << result + number10 << endl;

    //NaN
    result = number11 / number12;
    
    
    cout << number11 << "/" << number12 << " = " << result << endl;

    return 0;
}