//Write a program to search a given element in a set of N numbers.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array: ";
    cin>>n;
    int array[n];

    for(size_t i{0}; i<n; ++i){
        int num;
        cout<<"enter "<<i<<"th term of the array: ";
        cin>>num;
        array[i]=num;
    }

    int target;
    cout<<"enter the number to search: ";
    cin>>target;

    for(size_t i{0}; i<n; ++i){
        if(array[i]==target){
            cout<<"number found at index: "<<i;
        }
    }


    return 0;
}