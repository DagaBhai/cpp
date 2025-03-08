#include <iostream>
using namespace std;

int main(){

    //Declare an array of this
    int scores[10];

    //read data
    cout<<"scores [0] : "<<scores[0]<<endl;
    

    //read with a loop
    for(size_t i{0};i<10;++i){
        cout<<"scores ["<<i<<"] : "<<scores[i]<<endl;
    }
    cout<<"----------------------------"<<endl;
    
    //write data into an array
    scores[0]=20;
    scores[1]=21;
    scores[2]=22;

    //print the data out
    for(size_t i{0};i<10;++i){
        cout<<"scores ["<<i<<"] : "<<scores[i]<<endl;
    }

    cout<<"----------------------------"<<endl;
    //storing the value in the array
    for(size_t i{0};i<10;++i){
        scores[i]=i*10;
    }
    
    //printing the data out
    for(size_t i{0};i<10;++i){
        cout<<"scores ["<<i<<"] : "<<scores[i]<<endl;
    }

    cout<<"----------------------------"<<endl;
    
    //Declare and inititalize all the elements
    double salaries[5] {12.7, 7.5, 12.5, 8.1, 9.6};
    
    for(size_t i{0}; i<5 ; ++i){
        cout<<"salary["<<i<<"] : "<<salaries[i]<<endl;
    }

    cout<<"----------------------------"<<endl;

    //Declare and inititalize all the elements,those you leave out

    int families[5] {12, 7, 5};

    for(size_t i{0}; i<5; ++i){
        cout<<"families["<<i<<"] : "<<families[i]<<endl;
    }
    
    cout<<"----------------------------"<<endl;

    //omit the size of the array at declaration
    int class_size[] {10, 12, 15, 11, 18, 17, 23};
    
    //will print this with a range based for loop
    for(auto value:class_size){
        cout<<"value : "<<value<<endl;
    }

    cout<<"----------------------------"<<endl;

    //unable to overwrite an const array
    //const int brids[] {10, 12, 15, 11, 18, 17, 23};
    //brids[2]=78;

    //sum up scores array, store result in sum
    int scores_2[] {2, 5, 8, 2, 5, 6, 9};
    int sum{0};

    //elements in socres_2
    for(int element : scores_2){ 
        sum+=element;
    }

    cout<<"scores sum : "<<sum <<endl;

    return 0;
}