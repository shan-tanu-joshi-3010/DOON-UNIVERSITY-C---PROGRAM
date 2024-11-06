#include<iostream>
using namespace std;

class student{
    private:
    int age;
    string name, course, department;
    public:
    student(int a, string n, string c, string d): age(a), name(n), course(c), department(d) {} 
    friend void display(student obj);
};

void display(student obj ){
    cout<<"The name of the student is "<<obj.name<<endl;
    cout<<"The age of the student is "<<obj.age<<endl;
    cout<<"The course of the sutdent is "<<obj.course<<endl;
    cout<<"The department of the student is "<<obj.department<<endl;
}

int main (){
    student obj(20, "Shantanu Joshi", "Btech CSE", "Computer Science");
    display(obj);
}