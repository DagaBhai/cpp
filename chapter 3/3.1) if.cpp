#include <iostream>
using namespace std;


int main(){
    int value1=65;
    int value2=45;

    bool result=(value1>value2);

    cout<<boolalpha<<"result : "<<result<<endl;
    cout<<endl;
    cout<<"free standing if statement"<<endl;

    //if result

    if (result==true){
        cout<<value1<<" is not less than "<<value2<<endl;
    }
    if (!(result==true)){
        cout<<value1<<" is less than "<<value2<<endl;
    }

    cout<<endl;
    cout<<"using else clause"<<endl;
    if (result==true){
        cout<<value1<<" is not less than "<<value2<<endl;
    }
    else{
        cout<<value1<<" is less than "<<value2<<endl;
    }

    cout<<endl;
    cout<<"nested if statement"<<endl;

    bool red=false;
    bool green{true};
    bool yellow{false};
    bool police_stop {false};
    /*
    if (red){
        cout<<"std"<<endl;
    }
    if (yellow){
        cout<<"slow down"<<endl;
    }
    if (green){
        cout<<"Go"<<endl;
    }
    */
    /* 
    cout<<endl;
    cout<<"Police officer stops(verbose)"<<endl;
    if (green){
        if (police_stop){
            cout<<"stop"<<endl;
        }
        else{
            cout<<"Go"<<endl;
        }
    }
    */
    cout<<endl;
    cout<<"Police officer stops(less verbose)"<<endl;
    if(green && !police_stop){
        cout<<"Go"<<endl;
    }
    else{
        cout<<"Stop"<<endl;
    }
    return 0;
}