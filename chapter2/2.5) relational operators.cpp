#include <iostream>
using namespace std;


int main(){
   
    int number1 {45};
    int number2 {20};
	
    cout << "number1 : " << number1 << endl;
    cout << "number2 : " << number2 << endl;
	
	cout << endl;
	cout << "Comparing variables" << endl;
	
    cout << boolalpha ; // Make bool show up as true/false instead of 1/0
	//the need for parentheses here
    cout << "number1 < number2 : " << (number1 < number2) << endl;
	cout << "number1 <= number2 : " << (number1 <= number2) << endl;
    cout << "number1 > number2 : " << (number1 > number2) << endl;
    cout << "number1 >= number2 : " << (number1 >= number2) << endl;
    cout << "number1 == number2 : " << (number1 == number2) << endl;
    cout << "number1 != number2 : " << (number1 != number2) << endl;

	cout << endl;
	cout << "store comparison result and use it later" << endl;
	
	bool result = (number1 == number2);
    
    cout <<  number1 << " == " << number2 << " : " << result <<  endl;

    return 0;
}