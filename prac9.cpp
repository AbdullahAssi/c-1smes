//bubble sort
#include<iostream>
using namespace std;
int main()
{
	int size,temp,i,j;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the element at "<<i<<" index: ";
		cin>>arr[i];
	}
	cout<<"The original array is"<<endl;
	for(int j=0;j<size;j++)
	{
		cout<<arr[j]<<" ";
	}
	for(int i=0;i<size;i++)
		for(int j=0;i<size-1;j++)
		if(arr[j]>arr[j+1])
		{
			swap(arr[j],arr[j+1]);
		}
	cout<<"\nThe sorted array is\n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<"The second largest number is : "<<i-1;
}
