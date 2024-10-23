#include <iostream>
using namespace std;

// First base class
class Base1 {
protected:
    int num1;
public:
    Base1(int n1) : num1(n1) {}
};

// Second base class
class Base2 {
protected:
    int num2;
public:
    Base2(int n2) : num2(n2) {}
};

// Derived class
class Derived : public Base1, public Base2 {
public:
    Derived(int n1, int n2) : Base1(n1), Base2(n2) {}
    void sum() {
        cout << "Sum of two numbers: " << num1 + num2 << endl;
    }
};

int main() {
    Derived obj(15, 25);
    obj.sum();
    return 0;
}