#include<iostream>
using namespace std;
void addition(int,int);

int main()
{
	int x,y;
	cout<<"Enter first value: ";
	cin>>x;
	cout<<"Enter second value: ";
	cin>>y;
	int result = addition(x,y);
	cout<<result;
}
int addition (int a, int b)
{
	int c = a + b;
	cout<<"The value after addition is: "<<c;
}
