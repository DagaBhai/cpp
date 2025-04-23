/*
Q6) Write a Program to check if a given graph is a complete graph. Represent the graph using the Adjacency Matrix representation.
*/

#include <iostream>
using namespace std;

int complete(int** mat,int s){
    for(int i=0;i<s;++i){
        for(int j=0;j<s;++j){
            if(mat[i][j]!=1 && i!=j){
                return false;
            }
            else if(mat[i][j]!=0 && i==j){
                return false;
            }
        }
    }
    return true;
}

int main(){

    int s;
    cout<<"enter the size: ";
    cin>>s;

    int** m=new int*[s];
    for(int i=0;i<s;++i){
        m[i]=new int[s];
    }
    cout<<"enter the element of the matrix: "<<"\n";
    for(int i=0;i<s;++i){
        for(int j=0;j<s;++j){
            cin>>m[i][j];
        }
    }

    if(complete(m,s)){
        cout<<"the graph is complete";
    }
    else{
        cout<<"this graph is not complete";
    }

    return 0;
}