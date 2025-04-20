/*
Write a menu driven program to perform string manipulation (without using inbuilt string functions):

a. Show address of each character in string

b. Concatenate two strings.

c. Compare two strings

d. Calculate length of the string (use pointers)

e. Convert all lowercase characters to uppercase

f. Reverse the string

g. Insert a string in another string at a user specified position
*/

#include <iostream>
using namespace std;

int main(){
    char str1[100],str2[100],result[200];
    int choice;

    cout<<"enter the 1st string: ";
    cin.getline(str1,100);

    do{
        cout << "\nMenu:\n";
        cout << "1. Show address of each character in string\n";
        cout << "2. Concatenate two strings\n";
        cout << "3. Compare two strings\n";
        cout << "4. Calculate length of string\n";
        cout << "5. Convert to uppercase\n";
        cout << "6. Reverse the string\n";
        cout << "7. Insert string at a position\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice){
            case 1:{
                for(int i=0;str1[i]!='\0';i++){
                    cout<<"address for "<< str1[i] <<" char is: "<<(void*)&str1[i]<<endl;
                }
                break;
            }
            case 2:{
                cout<<"enter the 2nd string: ";
                cin.getline(str2,100);
                int i=0,j=0;
                while(str1[i]!='\0'){
                    result[i]=str1[i];
                    ++i;
                }
                while(str2[j]!='\0'){
                    result[i]=str2[j];
                    ++i;
                    ++j;
                }
                result[i]='\0';
                cout<<"result: "<<result;
                break;
            }
            case 3:{
                cout<<"enter the 3rd string: ";
                cin.getline(str2,100);
                bool flag=true;
                int i=0;
                while(str1[i]!='\0' && str2[i]!='\0'){
                    if(str1[i]!=str2[i]){
                        flag=false;
                        break;
                    }
                    i++;
                }

                if(flag){
                    if(str1[i]!='\0' || str2[i]!='\0'){
                        flag = false;
                    }
                }

                if (flag){
                    cout<<"both the strings are equal";
                }
                else{
                    cout<<"both the strings are not equal";
                }
                break;
            }
            case 4:{
                int i=0;
                for(i;str1[i]!='\0';++i){
                }
                cout<<"length of the string is: "<<i;
                break;
            }
            case 5:{
                int i=0;
                for(i;str1[i]!='\0';++i){
                    if(str1[i]>='a' && str1[i]<='z'){
                        result[i]=char(str1[i]-32);
                    }
                    else{
                        result[i]=str1[i];
                    }
                }
                result[i]='\0';
                cout<<"upper string is: "<<result;
                break;
            }
            case 6:{
                int i=0,j=0;
                for(i;str1[i]!='\0';++i){
                }
                int len=i-1;
                while(str1[j]!='\0'){
                    result[j]=str1[len];
                    ++j;
                    --len;
                }
                cout<<"this is the reverse: "<<result;
                break;
            }

            case 7 :{
                cout<<"enter 2nd string: ";
                cin.getline(str2,100);
                
                int pos,k;
                cout<<"enter position: ";
                cin>>pos;
    
                for(int i=0;str1[i]!='\0';++i){
                    if(i==pos){
                        for(int j=0;str2[j]!='\0';++j){
                            result[k++]=str2[j];
                        }
                    }
                    else{
                        result[k++]=str1[i];  
                    }
                }
                cout<<"this is the result: "<<result; 
                break;
            }
            case 8:{
                cout<<"exiting the program";
                break;
            }
            default:{
                cout<<"invalid choice!\n";
            }
        }

    } while(choice!=8);

    return 0;
}