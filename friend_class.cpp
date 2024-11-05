#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    // Constructor to initialize the number
    Number(int n) : num(n) {}

    // Friend function declaration
    friend bool isPrime(Number n);
};

// Friend function definition to check if the number is prime
bool isPrime(Number n) {
    if (n.num < 2) {
        return false;
    }
    for (int i = 2; i * i <= n.num; i++) {
        if (n.num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number to check if it is prime: ";
    cin >> num;

    Number n(num);

    if (isPrime(n)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}