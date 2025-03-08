#include <iostream>
using namespace std;

int main(){

    const char * message {"Hello world!"};

    cout<<"message : "<<message<<endl;

    //*message="B"; //complier error
    cout<<"message : "<< *message <<endl;

    //allow users to modify the string
    char message1[] {"Hello world"};
    message1[0]='B'; //"B" will make the B const char hence wont change message1

    cout<<"message : "<< message1 <<endl;


    return 0;
}