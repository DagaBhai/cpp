//Write a program to remove the duplicates from an array. 

#include <iostream>
using namespace std;

int main(){
    int x=5;
    int array1[x]={2,1,4,5,5} ;

    for(int i{0}; i<x;i++){

        for (int j{i+1}; j<x ;j++){

            if(array1[i]==array1[j]){

                for(int k=j;k<x-1;k++){
                    array1[k]=array1[k+1];
                }
                x--;
                j--;
            }
            else{
                continue;
            }
        }
    }

    for(int i{0};i<x;i++){
        cout<<array1[i]<<" ";
    }


    return 0;
}