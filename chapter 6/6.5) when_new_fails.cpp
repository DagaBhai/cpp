#include <iostream>
using namespace std;

int main(){
    /*
    int * data = new int[100000000000000];

    cout<<"Program ending well"<<endl;

    for(size_t i{0}; i<1000000; ++i){
        int * data = new int[1000000];
    }

    
    //exception
    for(size_t i{0}; i<1000000; ++i){
        try{
            int * data = new int[1000000];
        }
        catch(exception&ex){    //handling the error this means that if error exception will be able to handle all error
            cout<<"something went wrong : "<<ex.what()<<endl;   //exception&ex means expextion as ex
        }
        
    }
    */
   //nothrow
   for(size_t i{0}; i<100; ++i){
        int * data = new(nothrow) int[10000000000];

        if (data!=nullptr){
            cout<<"data allocated"<<endl;
        }
        else{
            cout<<"data allocated failed"<<endl;
        }
    }
    return 0;
}