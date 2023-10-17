//structure
#include<iostream>
using namespace std;
struct employee{
	string name,fname,dept,postion;
	int age,y_o_j;
	long long int contact;
	long long int salary;
};
int main()
{
	cout<<"\n---------Welcome to The Nabness------------\n\n";
	int size,tax;
	cout<<"Enter the size of the employee you want to enter: ";
	cin>>size;
	employee *emp[size];
	for(int i=0; i<size; i++)
	{
		cout<<"\nEnter the employee data for number "<<i+1<<endl;
		emp[i] = new employee();

		cout<<"ENter the name of the employee: ";
		cin.ignore();
		getline(cin,emp[i]->name);

		cout<<"Enter the Name of the Father :";
		cin.ignore();
		getline(cin,emp[i]->fname);

		cout<<"Enter the age :";
		cin>>emp[i]->age;

		cout<<"Enter year of joining: ";
		cin>>emp[i]->y_o_j;

		cout<<"Enter Department: ";
		cin.ignore();
		getline(cin,emp[i]->dept);

		cout<<"Enter contact number: ";
		cin>>emp[i]->contact;

		cout<<"Enter Position: ";
		cin.ignore();
		getline(cin,emp[i]->postion);

		cout<<"Enter Your salary: ";
		cin>>emp[i]->salary;
		if(emp[i]->salary>=60000)
		{
			tax = emp[i]->salary*0.05;
			cout<<"\nYour tax is: "<<tax;
		}
	}
	char again;
	do 
	{
		cout<<"Menu"<<endl;
		cout<<"1:Add Another employee. \n2:Display all employees\n3:search any employee\n4:logout";
		int opt;
		do
		{
			cout<<"Enter you operation: ";
			cin>>opt;
			if(opt<1 && opt>4)
			{
				cout<<"Wrong Selection:!";
			}
		}
		while (opt<1 && opt>4);
		if(opt==1)
		{
			cout<<"-------Adding another employee------------";

			cout<<"ENter the name of the employee: ";
		cin.ignore();
		getline(cin,emp[i]->name);

		cout<<"Enter the Name of the Father :";
		cin.ignore();
		getline(cin,emp[i]->fname);

		cout<<"Enter the age :";
		cin>>emp[i]->age;

		cout<<"Enter year of joining: ";
		cin>>emp[i]->y_o_j;

		cout<<"Enter Department: ";
		cin.ignore();
		getline(cin,emp[i]->dept);

		cout<<"Enter contact number: ";
		cin>>emp[i]->contact;

		cout<<"Enter Position: ";
		cin.ignore();
		getline(cin,emp[i]->postion);

		cout<<"Enter Your salary: ";
		cin>>emp[i]->salary;
		if(emp[i]->salary>=60000)
		{
			tax = emp[i]->salary*0.05;
			cout<<"\nYour tax is: "<<tax;
		}
















		
		}






	}
}
