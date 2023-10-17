//sum of a number
#include<iostream>
using namespace std;
int main()
{
	int lim,sum,avg;
	cout<<"Enter the limit of Number: ";
	cin>>lim;
	int arr[lim];
	for( int i=0; i<lim; i++)
	{
		cout<<"Enter Your Value: ";
		cin>>arr[i];
		sum = sum+ arr[i];
		avg = sum/lim;
	}
	cout<<"The sum of all values is: "<<sum<<endl;
	cout<<"The avrg of all values is: "<<avg;
}
