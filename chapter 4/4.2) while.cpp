#include <iostream>
using namespace std;

int main(){
    const size_t COUNT{10};
    size_t i{0}; //iteration declaration

    while (i<COUNT){ //condition 
        cout<<"iteration of i is : "<< i <<" : I am learning c++"<<endl;

        ++i; //incrementation
    }
    cout<<"loop done"<<endl;

    const int COUNT_STOP{10};
    size_t j{0};

    do{
        cout<<"iteration of i is : "<< i <<" : I am learning c++"<<endl;
        ++j;//increment
    }while(j<COUNT_STOP);
    
    cout<<"loop done using do while"<<endl;
    
    return 0;
}