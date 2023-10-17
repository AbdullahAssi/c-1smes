#include <iostream>
#include <algorithm>
using namespace std;

void reverseSort(int arr[], int size) {
    sort(arr, arr + size, greater<int>());
}

int main() {
    int size;


    cout << "Enter the size of the array: ";
    cin >> size;


    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }


    reverseSort(arr, size);

   
    cout << "Sorted array in reverse order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

