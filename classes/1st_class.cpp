#include <iostream>
#include <cmath>
using namespace std;

class Cylinder{
    public:
        double volume(){
            return M_PI*base_radius*base_radius*height;
        }
    public:
        double base_radius{1};
        double height{1};
};

int main(){

    Cylinder Cylinder1;
    cout<<"volume: "<<Cylinder1.volume()<<endl;
    cout<<"base radius: "<<Cylinder1.base_radius<<endl;
    cout<<"height: "<<Cylinder1.height<<endl;

    Cylinder1.base_radius=10;
    Cylinder1.height=3;
    cout<<"volume: "<<Cylinder1.volume()<<endl;
    return 0;
}

