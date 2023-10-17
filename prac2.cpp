#include<iostream>
using namespace std;

int main()
{
    int lim;
    cout<<"Enter the limit: ";
    cin>>lim;

    int numbers[lim],squares[lim],cubes[lim],sum[lim];
    for (int i=0;i<lim;i++)
    {
        numbers[i]=i;
        squares[i]=i*i;
        cubes[i]=i*i*i;
        sum[i]=numbers[i] + squares[i] +cubes[i]; 
    }

    int total =0;
    cout<<"Number:\t";
    for(int j=0;j<lim; j++)
    {
        cout<<numbers[j]<<"\t";
    }

    cout<<"\nSquare:\t";
    for(int i=0;i<lim;i++)
    {
        cout<<squares[i]<<"\t";
    }

    cout<<"\nCubes:\t";
    for(int i=0;i<lim;i++)
    {
        cout<<cubes[i]<<"\t";
    }

    cout<<"\nSums:\t";
    for(int i=0;i<lim;i++)
    {
        cout<<sum[i]<<"\t";
        total = total +sum[i];
    }
    cout<<"\nTotal\t"<<total<<endl;
    
    return 0;
}

