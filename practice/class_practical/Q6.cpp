//Write a program to merge two ordered arrays to get a single ordered array.

#include <iostream>
using namespace std;

int main(){
    int array1[11] = {1,2,3,4,5,6};
    int array2[] = {7,8,9,10,11};
    int i=0;

    for(i;i<5;++i){
        array1[i+6]=array2[i];
    }

    int size=sizeof(array1)/sizeof(array1[0]);

    for(int j=0;j<size;++j){
        cout<<array1[j]<<" ";
    }

    return 0;
}