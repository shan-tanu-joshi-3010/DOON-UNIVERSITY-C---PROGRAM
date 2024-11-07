#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    T name;
    int age;
    T course;
    T department;

    void display() const {
        cout << "Name: " << name << "\nAge: " << age << "\nCourse: " << course << "\nDepartment: " << department << endl;
    }
};

int main() {
    Student<string> student = {"Alice", 21, "Mathematics", "Science"};

    cout << "Student Details:" << endl;
    student.display();

    return 0;
}
