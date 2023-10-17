#include <iostream>
using namespace std;
void increment(int &x) 
{
    x++;
}

int main() {
    int num1;
    cout<<"Enter any value = ";
    cin>>num1;
    cout << "Before increment: " << num1 << endl;

    increment(num1);
    cout << "After increment: " << num1 << endl;

    return 0;
}

