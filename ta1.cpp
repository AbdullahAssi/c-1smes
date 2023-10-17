#include <iostream>
using namespace std;
int add(int x, int y)
 {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}

int main() {
    double x, y;
    char operation;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    double result;
    switch (operation)
	 {
        case '+':
            result = add(x, y);
            break;
        case '-':
            result = subtract(x, y);
            break;
        case '*':
            result = multiply(x, y);
            break;
        case '/':
            result = divide(x, y);
            break;
        default:
            cout << "Invalid operation. Try again." << endl;
            return 0;
    }

    cout << "Result: " << result <<endl;

    return 0;
}

