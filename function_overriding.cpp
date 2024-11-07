#include <iostream>
using namespace std;

class Base {
public:
    int a, b, c;
    Base(int x, int y, int z) : a(x), b(y), c(z) {}

    virtual int sum() {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    Derived(int x, int y, int z) : Base(x, y, z) {}

    int sum() override {
        return a + b + c + 10;  // Adding extra 10 in derived class for distinction
    }
};

int main() {
    Base baseObj(1, 2, 3);
    Derived derivedObj(4, 5, 6);

    cout << "Sum using Base class: " << baseObj.sum() << endl;
    cout << "Sum using Derived class: " << derivedObj.sum() << endl;

    return 0;
}
