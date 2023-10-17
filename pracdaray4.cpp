#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // dynamically allocate memory for the array
    int* dynamicArray = new int[size];

    // initialize the array with values
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i;
    }

    // print the array
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }

    // free the dynamically allocated memory
    delete[] dynamicArray;

    return 0;
}

