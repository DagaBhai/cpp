//Write a program that prints a table indicating the number of occurrences of each alphabet 
//in the text entered as command line arguments.  

#include <iostream>
#include <string>
using namespace std;


int count(string str,char chr){
    int count=0;
    for(size_t i=0; i<str.length();++i){
        if(str[i]==chr){
            count++;
        }
    }
    return count;
}



int main(int argc, char*argv[]){

    string str;

    if(argc>1){
        str = argv[1];
    }

    else{
        cout<<"enter the word: ";
        cin.ignore();
        getline(cin,str);        
    }

    for(char j='a';j<='z';++j){
        cout<<j<<"|"<<count(str,j)<<endl;
    }


    return 0;
}