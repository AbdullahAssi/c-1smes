//searching
#include<iostream>
using namespace std;
int main()
{
	int size,key,i;
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[size];
    for(int i=0; i<size;i++)
    {
    	cout<<"Enter Your "<<i<<" index number: ";
    	cin>>num[i];
	}
	cout<<"Enter the value to find: ";
	cin>>key;
	for(int i=0; i<size; i++)
	{
		if(num[i]==key)
		cout<<"Number found at "<<i;
	}	
	if(num[i]!=key)
		cout<<"Number Not Found!!";
}
