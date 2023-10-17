#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the array:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) 
		{
			cout<<"Enter Element at "<<"["<<i<<"]"<<"["<<j<<"]"<<" index: ";
            cin >> arr[i][j];
        }
    }

    cout << "The elements of the array are:\n";
    for(int i = 0; i < rows; i++) 
	{
        for(int j = 0; j < cols; j++)
		 {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The Transpose  of the array are:\n";
    for(int i = 0; i < rows; i++) 
	{
        for(int j = 0; j < cols; j++)
		 {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}

