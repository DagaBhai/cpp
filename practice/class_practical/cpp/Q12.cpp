/*
Define a class Person having name as a data member. 

Inherit two classes 
Student and Employee 
from Person. 

Student has additional attributes as course, marks and year 
and 
Employee has department and salary. 

Write display() method in all the three classes to display the corresponding attributes. 
Provide the necessary methods to show runtime polymorphism.
*/

#include <iostream>
using namespace std;

class person{
    protected:
        char name[100];
    public:
        void set_name(const char* name_param){
             int i = 0;
            while (name_param[i] != '\0') {
                name[i] = name_param[i];
                i++;
            }
            name[i] = '\0';
        }

        virtual void display(){
            cout<<"the name of this person is : "<<name;
        }
};

class Student : public person{
    protected:
        char course[100];
        int marks;
        int year;
    public:
        void set_course(const char* course_param){
            int i = 0;
            while (course_param[i] != '\0') {
                course[i] = course_param[i];
                i++;
            }
            course[i] = '\0';
        }
        void set_marks(int marks_param){
            marks=marks_param;
        }
        void set_year(int year_param){
            year=year_param;
        }
        void display() override{
            cout<<"the name of this person is : "<<name<<endl;
            cout<<"course of this person is : "<<course<<endl;
            cout<<"the marks of this person is : "<<marks<<endl;
            cout<<"the year in which is person is : "<<year<<endl;
        }
};

class Employee : public person{
    protected:
        char department[100];
        int salary;
    public:
        void set_department(const char* dep){
            int i=0;
            while(dep[i]!='\0'){
                department[i]=dep[i];
                i++;
            }
            department[i]='\0';
        }

        void set_salary(int salary_param){
            salary=salary_param;
        }

        void display() override{
            cout<<"the name of this person is :"<<name<<endl;
            cout<<"department of this person is : "<<department<<endl;
            cout<<"salary of this person is : "<<salary<<endl;
        }

};

int main(){
    person* p;

    Student s;
    s.set_name("Alice");
    s.set_course("Physics");
    s.set_marks(95);
    s.set_year(2025);

    Employee e;
    e.set_name("Bob");
    e.set_department("Engineering");
    e.set_salary(80000);

    p=&s;
    p->display();

    cout<<endl;

    p=&e;
    p->display();


    return 0;
}