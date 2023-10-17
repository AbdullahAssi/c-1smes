#include <iostream>
using namespace std;

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

int main()
{
	int arr2[] = { 2, 3, 4, 10, 40, 50, 70 };
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
