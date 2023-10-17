//slection sort
#include<iostream>
using namespace std;
int main()
{
	int size,i,min,temp,num;
	cout<<"Enter the Size of the array: ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the "<<i<<" Element of the array : ";
		cin>>arr[i];
	}
	cout<<"The original values in the array are: "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(i=0;i<size;i++)
	{
		min =i;
		for(int j=i+1;j<size;j++)
			if(arr[j]<arr[min])
				min = j;
		if(min !=i)
		{
			swap(arr[i],arr[min]);
		}
	}
	cout<<"\nTHe sorted array is: \n";
	for(i=0; i<size; i++){
	cout<<arr[i]<<" ";}
	cout<<"The second largest number is: ";
	cout<<"\nEnter a number to search in array: ";
	cin>>num;
	bool found=false;
	for(int i=0;i<size;i++)
	if(arr[i]==num)
	{
		cout<<"Number found at index: "<<i<<endl;
		found=true;
	}
	if(!found)
		cout<<"Number Not Found.\n";
}
