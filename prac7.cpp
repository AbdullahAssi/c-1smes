//Searching
#include<iostream>
using namespace std;
int main()
{
	int size,key,i;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size;i++)
    {
    	cout<<"Enter Your "<<i<<" index number: ";
    	cin>>arr[i];
	}
	cout<<"Enter number you want to search in array: ";
	cin>>key;
	int start = 0, end = size,mid;
	while(start<=end)
	{
		mid = (start+end)/2;
		if(arr[mid]==key){
			cout<<"Value found at index "<<mid<<endl;
			return 0;
		}	
		else if(key>arr[mid])
			start =mid+1;
		else
			end =mid -1;
	}
	cout<<"Key Not found!";
		
}
