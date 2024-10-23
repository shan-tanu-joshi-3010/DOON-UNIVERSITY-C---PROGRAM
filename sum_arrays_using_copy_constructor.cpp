#include <iostream>
using namespace std;

class ArraySum {
    int* arr;
    int size;

public:
    ArraySum(int* inputArr, int n) {
        size = n;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArr[i];
        }
    }

    ArraySum(const ArraySum& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    ~ArraySum() {
        delete[] arr;
    }

    int sumOfPositive() const {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }
};

int main() {
    int arr[] = { -3, 5, 7, -2, 9, 4, -1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    ArraySum originalArray(arr, size);

    ArraySum copiedArray = originalArray;

    cout << "Sum of positive numbers: " << copiedArray.sumOfPositive() << endl;

    return 0;
}
