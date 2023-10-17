#include<iostream>
using namespace std;
int main()
{
	  int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Enter a " <<i<<" integar: ";
		cin>>num[i];
	}
	cout<<"The actual array is: ";
	for (int i=0;i<size;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	cout<<"The array in reverse order is: ";
	for(int i=size-1; i>=0; i--)
	cout<<num[i]<<" ";
}
