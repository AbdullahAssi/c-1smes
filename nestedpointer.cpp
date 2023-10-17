#include<iostream>
using namespace std;
int main()
{
	int i=5,x=69;
	int *p = &x;
	int **pp = &p;
	cout<<p<<endl;
	cout<<*pp<<endl;
	cout<<*p;
	
}
