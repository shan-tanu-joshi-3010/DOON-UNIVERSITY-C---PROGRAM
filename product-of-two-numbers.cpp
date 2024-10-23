#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int num1, num2;
public:
    Base(int n1, int n2) : num1(n1), num2(n2) {}
};

// Derived class
class Derived : public Base {
public:
    Derived(int n1, int n2) : Base(n1, n2) {}
    void product() {
        cout << "Product of two numbers: " << num1 * num2 << endl;
    }
};

int main() {
    Derived obj(5, 6);
    obj.product();
    return 0;
}