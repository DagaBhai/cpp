#include <iostream>
using namespace std;

const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};
const int notebook{70};

int main(){
    int tool{Circle};
    
    // use switch for int, long, unsigned short, etc
    switch (tool) //switch is same as the else if and statements
    {
        case Pen:{ //condition if the statement is fulfilled then only it wil execute
            cout<<"Active tool is pen"<<endl;
        }
        break;//we use break cuz if we dont it will execute everything 
              //after that condition is fulfilled

        case Marker:{
            cout<<"Active tool is Marker"<<endl;
        }
        break;

        case Eraser:{
            cout<<"Active tool is Eraser"<<endl;
        }
        break;
        
        case Rectangle://grouping the condition
        case Circle:{
            cout<<"Drawing shapes"<<endl;
        }
        break;

        default:{ //if the tool doesnt have any case default should executed
            cout<<"No match found"<<endl;
        }
        break;
    }

    cout<<"Moving on"<<endl;

    return 0;
}