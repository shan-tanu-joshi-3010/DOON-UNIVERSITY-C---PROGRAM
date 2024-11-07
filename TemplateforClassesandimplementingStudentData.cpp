#include <iostream>
#include <string>
using namespace std;

template <class T>
class Student {
    T name;
    int age;
    T course;
    T department;

public:
    Student(T n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}

    void display() const {
        cout << "Name: " << name << "\nAge: " << age << "\nCourse: " << course << "\nDepartment: " << department << endl;
    }
};

int main() {
    Student<string> student("John Doe", 20, "Computer Science", "Engineering");

    cout << "Student Details:" << endl;
    student.display();

    return 0;
}
