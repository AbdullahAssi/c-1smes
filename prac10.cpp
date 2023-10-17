//even pass by refernce.
#include<iostream>
using namespace std;
void evencheck(int[], int, int& , int&);
int main()
{
    int size,even=0,odd=0;
    cout<<"ENter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size; i++)
    {
        cout<<"The value at index "<<i<<"  is : ";
        cin>>arr[i];
    }
    evencheck(arr,size,even,odd);
    cout<<"The Numbe of even value is: "<<even<<endl;
    cout<<"The number of odd values is: "<<odd<<endl;
}
void evencheck(int *arr, int size, int& even ,int& odd)
{

    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
}

