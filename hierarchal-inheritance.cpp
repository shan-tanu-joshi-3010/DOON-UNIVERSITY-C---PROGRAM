#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int num1, num2;
public:
    Base(int n1, int n2) : num1(n1), num2(n2) {}
};

// First derived class
class Derived1 : public Base {
public:
    Derived1(int n1, int n2) : Base(n1, n2) {}
    void displayFirst() {
        cout << "First number: " << num1 << endl;
    }
};

// Second derived class
class Derived2 : public Base {
public:
    Derived2(int n1, int n2) : Base(n1, n2) {}
    void displaySecond() {
        cout << "Second number: " << num2 << endl;
    }
};

int main() {
    Derived1 obj1(30, 40);
    Derived2 obj2(30, 40);

    obj1.displayFirst();
    obj2.displaySecond();

    return 0;
}