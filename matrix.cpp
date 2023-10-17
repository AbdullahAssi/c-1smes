#include<iostream>
using namespace std;
int matrix(int num);
int main()
{
	int num;
	cout<<"Enter the size of matrix : ";
	cin>>num;
	matrix(num);
}
 
int matrix(int num)
{

	int x=1;
	int y=1;
	int arr[num][num];
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
			{
 				cout<<"Enter the value in a["<<x<<"]["<<y<<"] : ";
				cin>>arr[i][j];
				y++;
			}
			x++;
}
	cout<<"\nYour matrix looks like this : \n";
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			cout<<"   "<<arr[i][j];
		}
	cout<<endl;
}

	cout<<"\nThe diagonals are : ";
	int di[num];
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(i==j)
				{
					di[i]=arr[i][j];
					cout<<"   "<<di[i];
				}
			}
		}
 
	int count=0;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
			{
				if(i>j || i<j)
					{
						if(di[i]==di[j])
						count=2;
					}
				}
			}
		for(int i=0;i<num;i++)
		{
			for(int j=0;j<num;j++)
			{
			if(i>j || i<j)
				{
					if(di[i]==di[j])
				{
					if(arr[i][j]==0)
					count=1;
					else
					count=2;
				}	
			}
		}
	}
	if(count==2)
	cout<<"\nIt is a diagonal matrix";
	else if(count==1)
		{
			cout<<"\nIt is a identity matrix";
			return 1;
		}
}

