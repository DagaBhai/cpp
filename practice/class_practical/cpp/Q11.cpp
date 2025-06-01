/*
Create a class Student containing fields for Roll No., Name, Class, Year and Total Marks. 
Write a program to store 5 objects of Student class in a file. 
Retrieve these records from the file and display them.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string studentClass;
    int year;
    float totalMarks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Class: ";
        cin >> studentClass;
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    void display() {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Class: " << studentClass
             << ", Year: " << year
             << ", Total Marks: " << totalMarks << endl;
    }
};

int main(){

    Student student1[5];

    ofstream outfile("students.txt");
    if(outfile.is_open()){
        cout << "Enter details for 5 students:\n";
        for(int i=0;i<5;++i){
            cout<<"\nstudent : "<<i+1<<";\n";
            student1[i].input();
            outfile << student1[i].rollNo << " "
                    << student1[i].name << " "
                    << student1[i].studentClass << " "
                    << student1[i].year << " "
                    << student1[i].totalMarks << endl;
    }
}
    else{
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    ifstream retrive("students.txt");
    if(retrive.is_open()){   
        cout<<"\nstudent records from the file: \n";
        Student s;
        while(retrive>>s.rollNo >> s.name >> s.studentClass >> s.year >> s.totalMarks){
            s.display();
        }
        retrive.close();
    }
    else{
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    return 0;
}