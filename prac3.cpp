#include<iostream>
using namespace std;
int main(){
	 int lim;
    cout<<"Enter the limit: ";
    cin>>lim;
    int arr[lim],max;
    for(int i=0;i<lim; i++)
    {
    	cout<<"Enter the value: ";
    	cin>>arr[i];
	}
	max=arr[0];
	int min=arr[0];
	for(int j=0;j<lim;j++)
	{
		if(max<arr[j])
		max=arr[j];
		if(min>arr[j])
		min=arr[j];
	}
	cout<<"Maximum Number is: "<<max<<endl;
	cout<<"Minimum Number is: "<<min;

}
