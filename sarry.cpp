#include<iostream>
using namespace std;
int main()
{
	int size,min,i,j;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int arr[size];
	for(int i=0; i<size;i++)
	{
		cout<<"The element at "<<i<<" index is: ";
		cin>>arr[i];
	}
	cout<<"The original array is: ";
	for (int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	min = i;
	for(int i=0; i<size; i++)
	{
		min=i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[i]<arr[min])
			min = j;
			if(min!=i)
			{
				swap(arr[i],arr[min]);
			}
		}
	}
	cout<<"\nThe sorted array is: ";
		for(int i=0;i<size;i++)
			cout<<arr[i]<<" ";
	
	//searching;
	int num;
	bool found = false;
	cout<<"\nEnter a number to search in array: ";
	cin>>num;
	for(int i=0; i<size; i++)
	{
		if(num==arr[i])
		cout<<"Num found at index: "<<i;
		found = true;
	}
	if(!found)
	cout<<"Num not found in array: ";
	
	cout<<"Largest number is : "<<arr[size-1]<<endl;
	cout<<"second largest numbe is : "<<arr[size-2]<<endl;
	cout<<"Minimum nUmber is : "<<arr[0]<<endl;
	cout<<"2nd minimum number is : "<<arr[1]<<endl;
	
	
}
