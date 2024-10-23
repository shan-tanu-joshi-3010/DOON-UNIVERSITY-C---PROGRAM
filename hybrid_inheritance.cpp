#include <iostream>
using namespace std;

// Base class A
class A {
protected:
    int a;
public:
    A(int val) : a(val) {}
};

// Class B inherits from A
class B : public A {
protected:
    int b;
public:
    B(int val1, int val2) : A(val1), b(val2) {}
};

// Class C inherits from A
class C : public A {
protected:
    int c;
public:
    C(int val1, int val3) : A(val1), c(val3) {}
};

// Class D inherits from B
class D : public B {
public:
    D(int val1, int val2) : B(val1, val2) {}
    void showD() {
        cout << "Class D values: " << a << ", " << b << endl;
    }
};

// Class E inherits from C
class E : public C {
public:
    E(int val1, int val3) : C(val1, val3) {}
    void showE() {
        cout << "Class E values: " << a << ", " << c << endl;
    }
};

int main() {
    D objD(10, 20);
    E objE(30, 40);

    objD.showD();
    objE.showE();

    return 0;
}