#include<iostream>
using namespace std;
struct car
{
	string name;
	int model;
	int number;
	string type;
};
int main()
{
	
	int lim;
	cout<<"Enter how many car details you want to put :";
	cin>>lim;
	car car1[lim];
	for (int i=0; i<lim; i++)
	{
		cout<<"Enter Car Name :";
		cin>>car1[i].name;
		cout<<"Enter Car model :";
		cin>>car1[i].model;
		cout<<"Enter Car number :";
		cin>>car1[i].number;
		cout<<"Enter Car type : ";
		cin>>car1[i].type;
	}
	for (int i=0; i<lim; i++)
	{
		cout<<"\nYour Car Name is :"<<car1[i].name<<endl;
		cout<<"Your Car Model is: "<<car1[i].model<<endl;
		cout<<"Your Car Number is :"<<car1[i].number<<endl;
		cout<<"Your Car Type is :"<<car1[i].type<<endl;
	}
}
