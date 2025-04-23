/*
Create a Triangle class. Add statements to ensure the following conditions: 
all sides are greater than 0 and sum of any two sides is greater than the third side. 
The class should also have overloaded functions for calculating the area of a right angled triangle as well 
as using Heron's formula to calculate the area of any type of triangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

class triangle{
    int b=0,h=0;
    
public :
    float area(int b,int h){
        float area=0.5*b*h;
        return area;
    }
    float area(int a, int b,int c){
        float s=(a+b+c)/2.0;
        float area=(s*(s-a)*(s-b)*(s-c));
        return sqrt(area);
    }
};


int main() {
    int a, b, c;

    while (true) {
        cout << "Enter the 1st side: ";
        cin >> a;
        cout << "Enter the 2nd side: ";
        cin >> b;
        cout << "Enter the 3rd side: ";
        cin >> c;

        if (a <= 0 || b <= 0 || c <= 0) {
            cout << "Sides must be greater than 0. Try again.\n";
        } else if (a + b <= c || b + c <= a || a + c <= b) {
            cout << "Triangle inequality not satisfied. Try again.\n";
        } else {
            break; // valid triangle
        }
    }

    triangle triangle1;
    cout<<"area (Heron's formula): "<<triangle1.area(a,b,c)<<endl;
    
    if(pow(a,2)==pow(b,2)+pow(c,2)|| pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(a,2)+pow(b,2)){

        int base,height;
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)){
            //condition ? value_if_true : value_if_false;
            base= min(b,c);
            height = max(b,c);
        }
        else if(pow(b, 2) == pow(a, 2) + pow(c, 2)){
            base= min(a,c);
            height = max(a,c);
        }
        else{
            base=min(a,b);
            height = max(a,b);
        }

        cout<<"area (Right-angled Triangle): "<<triangle1.area(base,height);
    }

    return 0;
}