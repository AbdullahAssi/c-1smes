#include <iostream>
using namespace std;

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;


    cout << "Original values: " << a << " " << b << endl;


    swapByValue(a, b);
    cout << "Values after swap by value: " << a << " " << b << endl;


    swapByReference(a, b);
    cout << "Values after swap by reference: " << a << " " << b << endl;

    return 0;
}

