#include<iostream>
using namespace std;
void temp(int [],int, int&, int&,int&,int&,int&);
int main()
{
	int size,count =0,countl=0,countn=0,highestt,lowestt;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" element:  ";
		cin>>arr[i];
	}
	
	temp(arr,size,count,countl,countn,highestt,lowestt);
	
	cout<<"The temp went higher: "<<count<<endl;
	cout<<"The temp was lower: "<<countl<<endl;
	cout<<"The temp was normal: "<<countn<<endl;
	cout<<"Highest temp: "<<highestt<<endl;
	cout<<"Lowest temp: "<<lowestt<<endl;
}
void temp(int*arr,int size, int& count,int&countl,int&countn,int&highest,int&lowest)
{
	highest=arr[0];
	lowest= arr[0];
	for(int i=0;i<size;i++)
	{
		if(highest<arr[i])
		highest = arr[i];
		else if(lowest>arr[i])
		lowest=arr[i];
	}
	for(int i=0; i<size;i++)
	{
	if(arr[i]>24){
		count++;
	}
		else if(arr[i]<22)
		countl++;
		else
		countn++;
	}		
}

