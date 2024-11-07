#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int add(int a, int b) {
    return a + b + 10;  // Overloading with int to add 10 for distinction
}

int main() {
    cout << "Template Function - Add (10.5 + 5.5): " << add(10.5, 5.5) << endl;
    cout << "Overloaded Function - Add (10 + 5): " << add(10, 5) << endl;
    cout << "Template Function - Multiply (4 * 5): " << multiply(4, 5) << endl;

    return 0;
}
