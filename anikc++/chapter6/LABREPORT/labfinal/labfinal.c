#include <iostream>

using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    cout << "Array values:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int arraySize = 5; // You can change the array size as needed
    int myArray[arraySize];

    inputArray(myArray, arraySize);
    printArray(myArray, arraySize);

    return 0;
}

