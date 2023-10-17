#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    int i, j, min, var;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        var = arr[min];
        arr[min] = arr[i];
        arr[i] = var;
    }
}
int search(int arr2[], int a, int c)
 {
	int l = 0, r = a - 1;
	while (l <= r)
    {
		int m = l + (r - l) / 2;
		if (arr2[m] == c)
		return m;
		if (arr2[m] < c)
		l = m + 1;
		else
		r = m - 1;
	}
	return -1;
}



int main() {
    int arr[5] = { 2, 32, 54, 29, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, n);
    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int arr2[] = { 2, 32, 54, 29,7 };
	int c;
	cout << "Enter a number to search in array ";
	cin >> c;
	int a = sizeof(arr2) / sizeof(arr2[0]);
	int result = search(arr2, a, c);
	if (result == -1)
	cout << "Number not found";
	else
	cout << "Number found at index " << result;
    return 0;
}

