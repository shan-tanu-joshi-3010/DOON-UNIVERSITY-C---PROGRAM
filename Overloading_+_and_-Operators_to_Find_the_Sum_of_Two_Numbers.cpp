#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) : value(v) {}

    // Member function overloading
    Number operator+(const Number &obj) {
        return Number(value + obj.value);
    }

    Number operator-(const Number &obj) {
        return Number(value - obj.value);
    }

    // Friend function overloading
    friend Number operator+(const Number &obj1, const Number &obj2);
    friend Number operator-(const Number &obj1, const Number &obj2);

    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Friend function definition
Number operator+(const Number &obj1, const Number &obj2) {
    return Number(obj1.value + obj2.value);
}

Number operator-(const Number &obj1, const Number &obj2) {
    return Number(obj1.value - obj2.value);
}

int main() {
    Number num1(20), num2(10);

    Number sum = num1 + num2;
    Number diff = num1 - num2;

    cout << "Sum: "; sum.display();
    cout << "Difference: "; diff.display();

    return 0;
}
