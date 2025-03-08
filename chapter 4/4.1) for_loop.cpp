#include <iostream>
using namespace std;

int main(){
    //for loop will run 10 times since condition is i<10, i will be 0 to 9 
    for (unsigned int  i {0}; i<10 ; ++i){
        cout<<"iteration of i is : "<< i <<" : I am learning c++"<<endl;
    }
    cout<<"loop done"<<endl;


    //for loop using size_t
    //use size_t : a representation of some unsigned int for positive number [size]
    for (size_t  i {0}; i<10 ; ++i){
        cout<<"iteration of i is : "<< i <<" : I am learning c++"<<endl;
    }
    cout<<"loop done using size_t"<<endl;
    
    //iterator declared outside the loop
    size_t  i {0}; //itrator defined outside

    for (i; i<10 ; ++i){
        cout<<"iteration of i is : "<< i <<" : I am learning c++"<<endl;
    }
    cout<<"loop done using size_t and iterator defined outside"<<endl;
    
    //iterator declared outside the loop
    size_t  a {0}; //itrator defined outside

    for ( ; a<10 ; ++a){
        cout<<"iteration of i is : "<< a <<" : I am learning c++"<<endl;
    }
    cout<<"loop done using size_t and iterator defined outside, not using i in for loop"<<endl;
    
    //iterator declared outside the loop
    const size_t  COUNT {10}; // STOP VALUE for range defined outside

    for (size_t  i {0}; i<COUNT ; ++i){
        cout<<"iteration of i is : "<< i <<" : I am learning c++"<<endl;
    }
    cout<<"loop done using size_t and stop value outside the loop"<<endl;
    

    return 0;
}