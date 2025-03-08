#include <iostream>
using namespace std;

int main(){
    //condition without ternary
    int max{};
    
    int a{20};
    int b{35};

    if (a>b){
        max=a;
    }
    else{
        max=b;
    }
    cout<<"max number without ternary is : "<<max<<endl;

    max=(a>b)? a : b;//ternary operator
    
    cout<<"max number with ternary is : "<<max<<endl;

    return 0;
}