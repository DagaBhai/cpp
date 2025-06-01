#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){

    ifstream obj("read.txt");

    string line;
    string newline;
    
    if(obj.is_open()){
        
        cout<<"before removing the white space : ";
        while(getline(obj,line)){
            cout<<line<<endl;
            
            for(int i=0;i<line.length();++i){
                if(line[i]!=' '){
                    newline+=line[i];
                }
            }
        }
        cout<<"after removing the white space : "<<newline<<endl;
        
        obj.close();
    }

    else{
        cout<<"it is not open";
    }

    ofstream writefile("write.txt");
    if(writefile.is_open()){
        writefile<<newline;
        writefile.close();
        cout<<"copied to the file 'writefile' ";
    }
    else{
        cout<<"error opening the file";
    }

    return 0;
}