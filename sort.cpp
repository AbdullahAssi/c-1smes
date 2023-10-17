#include<iostream>
using namespace std;
int main()
{
	int size,x;
	cout<<"Enter the number you want to add in array";
	cin>>size;
	cout<<"ENTER NUMBERS:";
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
			swap(arr[i],arr[j]);
		}
	}
}
	cout<<"The sorted array is: ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"Greatest number:"<<arr[i];
}
