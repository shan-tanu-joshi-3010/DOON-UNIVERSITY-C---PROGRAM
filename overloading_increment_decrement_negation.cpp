#include <iostream>
using namespace std;

class Number {
    int a;

public:
    Number(int value) : a(value) {}

    void display() {
        cout << "Value of a: " << a << endl;
    }

    // Overloading increment operator (prefix ++a)
    void operator++() {
        a += 5;
    }

    // Overloading decrement operator (prefix --a)
    void operator--() {
        a -= 1;
    }

    // Overloading negation operator (-a)
    void operator-() {
        a = -a;
    }

    // Friend functions
    friend void increment(Number &num);
    friend void decrement(Number &num);
    friend void negate(Number &num);
};

void increment(Number &num) {
    num.a += 5;
}

void decrement(Number &num) {
    num.a -= 1;
}

void negate(Number &num) {
    num.a = -num.a;
}

int main() {
    Number n(10);
    cout << "Original: "; n.display();

    ++n;
    cout << "After incrementing by 5: "; n.display();

    --n;
    cout << "After decrementing by 1: "; n.display();

    -n;
    cout << "After negation: "; n.display();

    return 0;
}
