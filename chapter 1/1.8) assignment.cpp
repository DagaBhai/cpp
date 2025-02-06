#include <iostream>
using namespace std;

int main(){
    int var1{123};
    cout<< "var1 : "<< var1 <<endl;
    
    //assigned value change

    var1=55;
    cout << "var1 : " << var1 <<endl;

    cout<<"----------------------"<<endl;

    double var2 {44.55};
    cout << "var2 : " << var2 << endl;
    
    var2 = 99.99; // Assign
    cout << "var2 : " << var2 << endl;
    
    cout << endl;

    cout << "----------------" << endl;

    cout << endl;
    bool state{false};
    cout << boolalpha;
    cout << "state : " << state << endl;
    
    state = true; // Assign
    
    cout << "state : " << state << endl;


    //Auto type deduction
    //Care-22ful about auto assignments
    auto var3 {333u};
    
    var3 = -22; // Assign negative number. DANGER!
    
    cout << "var3 : " << var3 << endl;

    return 0;
}