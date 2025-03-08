#include <iostream>
using namespace std;

int main(){
    int value {5};

    //increment by one
    value = value+1;
    cout << "The value is : "<<value<<endl;
    
    value=5;

    value=value-1;
    cout << "The value is : "<<value<<endl;

    cout<<"--------------------------------------------------"<<endl;

    value=5;

    cout<<"The value is (++ incrementing) : "<<value++<<endl; //output not incremented - 5
    cout<<"The value is : "<<value<<endl; //incremented output - 6

    value=5;

    cout<<"The value is (incrementing ++ ) : "<<++value<<endl; //output incremented - 5
    cout<<"The value is : "<<value<<endl; //incremented output - 6

    value=5;

    cout<<"The value is (decrementing --) : "<<value--<<endl; //output not decremented - 5
    cout<<"The value is : "<<value<<endl; //decremented output - 4

    value=5;

    cout<<"The value is (-- decrementing) : "<<--value<<endl; //output decremented - 4
    cout<<"The value is : "<<value<<endl; //decremented output - 4

    return 0;
}