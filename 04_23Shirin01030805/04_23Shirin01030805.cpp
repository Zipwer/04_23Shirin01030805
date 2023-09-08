#include <iostream>
using namespace std;

int main() {
    const int arraySize = 5;
    int arr[arraySize] = { 10, 5, 8, 15, 3 };

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < arraySize; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;

    return 0;
}
