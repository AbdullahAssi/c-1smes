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
	car car1;
	car1.name = "BMW M5";
	car1.model= 2021;
	car1.number;
	car1.type = "Sedan";
	cout<<"Enter car Name: ";
	cin>>car1.name;
	cout<<"Enter car Number: ";
	cin>>car1.number;
	cout<<"Your Car number is : "<<car1.number<<endl;
	cout<<"\nYour Car details are: "<<endl;
	cout<<"\nCar Name :" <<car1.name;
	cout<<"\nCar Model : "<<car1.model;
	cout<<"\nCar Number : "<<car1.number;
	cout<<"\nCar Type : "<<car1.model;
	
}
