#include<iostream>
using namespace std;
int main()
{
	int x = 6;
	int *p = &x;
	cout<<"Address of x = " << &x <<endl;
	cout<<"Address of x through pointer = "<< p <<endl;
	cout<<"Address of pointer = " << &p<<endl;
	cout<<"Value of variable through pointer is = "<<*p<<endl;
	*p = 18;
  	cout<<" Updated Value of variable through pointer is = "<<*p<<endl;
}
