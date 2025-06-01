/*
Create a Triangle class. Add statements to ensure the following conditions: 
all sides are greater than 0 and sum of any two sides is greater than the third side. 
The class should also have overloaded functions for calculating the area of a right angled triangle as well 
as using Heron's formula to calculate the area of any type of triangle.
*/



#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
    public:
        int s1,s2,s3,b,h;
        bool isRightAngled;
    public:
        bool input(int a,int b,int c){
            s1 = a; s2 = b; s3 = c;


            if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
                cout << "All sides must be greater than 0.\n";
                return false;
            }

            if ((s1 + s2 <= s3) || (s1 + s3 <= s2) || (s2 + s3 <= s1)) {
                cout << "The sum of any two sides must be greater than the third side.\n";
                return false;
            }

            cout << "It is a valid triangle.\n";

            isRightAngled = false;
            if (pow(s1, 2) == pow(s2, 2) + pow(s3, 2)) {
                base = min(s2, s3);
                height = max(s2, s3);
                isRightAngled = true;
            } else if (pow(s2, 2) == pow(s1, 2) + pow(s3, 2)) {
                base = min(s1, s3);
                height = max(s1, s3);
                isRightAngled = true;
            } else if (pow(s3, 2) == pow(s1, 2) + pow(s2, 2)) {
                base = min(s1, s2);
                height = max(s1, s2);
                isRightAngled = true;
            }

            if (isRightAngled) {
                cout << "This is a right-angled triangle.\n";
                cout << "Base = " << base << ", Height = " << height << "\n";
            }

            return true;
        }

        float areaRightTriangle() {
            if (!isRightAngled) {
                cout << "Not a right-angled triangle.\n";
                return 0;
            }
            return 0.5f * base * height;
        }
        
        float areaHeron() {
            float s = (s1 + s2 + s3) / 2.0;
            return sqrt(s * (s - s1) * (s - s2) * (s - s3));
        }
};
int main(){
    Triangle t;
    int a, b, c;

    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    if (t.input(a, b, c)) {
        cout << "Area (Heron's Formula): " << t.areaHeron() << "\n";
        float areaRight = t.areaRightTriangle();
        if (areaRight > 0)
            cout << "Area (Right Triangle): " << areaRight << "\n";
    }

    return 0;
}
