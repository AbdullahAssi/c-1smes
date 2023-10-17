#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size: ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Array :";
		cin>>arr[i];
	}
	for (int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				swap(arr[i],arr[j]);
			}
		}
	}
	cout<<"Second largest: "<<arr[1];
}
