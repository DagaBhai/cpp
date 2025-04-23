//Write a program to generate power set of a set.

#include <iostream>
#include <cmath>
using namespace std;

void powerset(int set[],int n){
    int power_set=pow(2,n);
    for(int i=0;i<power_set;++i){
        cout<<"{";
        bool first=true;
        for (int j = 0; j < n; ++j){
            if(i & (1<<j)){
                if(!first) cout<<",";
                cout<<set[j];
                first=false;
            }
        }
        cout<<"}"<<endl;
    }
}

int main(){
    int n;

    cout<<"enter the size of the set : ";
    cin>>n;

    int* set = new int[n];
    cout<<"enter the values of the set: ";
    for(int i=0;i<n;++i){
        cin>>set[i];
    }

    powerset(set,n);

    return 0;
}
