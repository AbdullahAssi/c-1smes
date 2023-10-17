#include<iostream>
using namespace std;
void even(int[],int,int&,int&);
int main()
{
	int size,even=0,odd=0;
	cout<<"ENter the size of the array: ";
	cin>>size;
	int arr[size];
	for (int i=0;i<size;i++)
	{
		cout<<"Enter the elemnets of the array: ";
		cin>>arr[i];
	}
	cout<<"The number of the even is "<<even<<endl;
	cout<<"The number of odd is: "<<odd<<endl;
}
	void even(int *arr,int size, int&even, int&odd)
	{
		for (int i=0; i<size; i++)
		{
			if(arr[i]%2==0)
			even++;
			else
			odd++;
		}
	}

