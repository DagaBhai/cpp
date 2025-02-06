#include <iostream>
using namespace std;

int main(){
    bool red_light{false};
    bool green_light{true};

    if(red_light==true){
        cout<<"stop!"<<endl;
    }
    else{
        cout<<"Go through!"<<endl;
    }

    if(green_light){
        cout<<"The light is green!"<<endl;
    }
    else{
        cout<<"The light is NOT green"<<endl;
    }
    //size of
    cout<<"size of bool : "<<sizeof(bool)<<endl;

    cout<<endl;
    cout<<"red_light : "<<red_light<<endl;
    cout<<"green_light : "<<green_light<<endl;

    cout << boolalpha;
    cout<<endl;
    cout<<"red_light : "<<red_light<<endl;
    cout<<"green_light : "<<green_light<<endl;

    return 0;
}