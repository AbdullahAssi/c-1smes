//function
#include<iostream>
using namespace std;
int add(int num1,int num2);
int main()
{
	int a;
	int b;
	cout<<"Enter a number ";
	cin>>a;
	cout<<"ENter a 2nd Number ";
	cin>>b;
	cout<<"Your addition is = "<<add(a,b);
	return 0;
}
int add (int num1 , int num2)
{
	int sum = num1 + num2;
	return sum;
}
