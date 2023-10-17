#include<iostream>
using namespace std;
int max(int[],int);
 int main()
 {
 	int lim;
 	int arr[lim];
 	cout<<"Enter the limit of array : ";
 	cin>>lim;
 	for(int i = 0; i<lim; i++)
 	{
 		cout<<"Enter Element ["<<i<<"] = ";
 		cin>>arr[i];
	 }
	 cout<<"Your Maximum number is : "<<max(arr,lim)<<endl;
 
 }
 int max(int arr1[], int a)
 {
 	int max= arr1[0];
 	for (int i=0; i<a; i++)
 	{
 		if(arr1[i]>max)
 		{
 			max = arr1[i];
		 }
	 }
	 return max;
 }

