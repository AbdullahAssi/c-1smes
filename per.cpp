#include<iostream>
using namespace std;
int per (int, int);
int main()
{
	int a,b;
	cout<<"Enter Your Marks: ";
	cin>>a;
	cout<<" Enter Total Marks : ";
	cin>>b;
	cout<<"Your percentage is : ";
	cout<< per(a,b)<<"%"<<endl;
}
int per (int a,int b)
{
	int p=float((a/b)*100);
	return p;
}
