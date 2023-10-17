#include <iostream>
using namespace std;

void swap_value(int *x, int *y) {
    int var = *x;
    *x = *y;
    *y = var;
}

int main() {
    int i , j;
    cout<<"Enter Value of I for swapping : ";
    cin>>i;
    cout<<"Enter Value of J for swapping : ";
    cin>>j;
    cout << "Before swapping: i = " << i << " j = " << j << endl;
    
	swap_value(&i, &j);
	cout << "After swapping: i = " << i << " j = " << j << endl;
	return 0;
}

