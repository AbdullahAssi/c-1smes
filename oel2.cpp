#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct employee{
	int id;
	string  name;
	string father_name;
	int age;
	double contact;
	string dept;
	int year;
	int salary;
	string position;
	
};
int main()
{
	do{
	int number,pass,tax,again;
	cout<<"Enter how many employes data you want to add:";
	cin>>number;
	employee data[number];
	for(int i=0;i<number;i++)
	{
		cout<<"\n"<<i+1<<endl;
		cout<<"Enter ID of employee:";
		cin>>data[i].id;
		cout<<"Enter name of employe:";
		cin.ignore();
		getline(cin,data[i].name);
		cout<<"Enter  father name:";
		getline(cin,data[i].father_name);
		cout<<"Enter age: ";
		cin>>data[i].age;
		cout<<"Enter contact number:";
		cin>>data[i].contact;
		cout<<"Enter Department:";
		cin.ignore();
		getline(cin,data[i].dept);
		cout<<"Enter year of joining:";
		cin>>data[i].year;
				cout<<"Enter Position: ";
		cin.ignore();
		getline(cin,data[i].position);
		cout<<"Enter Salary:";
		cin>>data[i].salary;
		if(data[i].salary>50000)
		{
			tax=data[i].salary*0.05;
			cout<<"Your tax is="<<tax<<endl;
		}
		else
		{
			tax=0;
			cout<<"NO TAX\n\n"<<tax;
		}
	}
		
	   	cout<<"\nEnter the Employee ID you want to add";
	   	cin>>pass;
	   	for(int i=0;i<number;i++)
	   	if(pass==data[i].id)
	   	{
	   		cout<<"NAME="<<data[i].name<<endl;
	   		cout<<"FATHER NAME="<<data[i].father_name<<endl;
	   		cout<<"AGE="<<data[i].age<<endl;
	   		cout<<"DEPARTMENT="<<data[i].dept<<endl;
	   		cout<<"SALARY="<<data[i].salary<<endl;
	   		cout<<"CONTACT="<<data[i].contact<<endl;
	   		cout<<"POSITION="<<data[i].position<<endl;
	   		cout<<"Tax="<<tax<<endl;
		   }
      ofstream outfile;
    outfile.open("employee.txt");
    for(int i=0; i<number; i++)
    {
    	outfile<<"ID\t"<<"NAME\t\t"<<"FATHER NAME\t"<<"AGE\t\t"<<"CONTACT\t\t"<<"DEPARTMENT\t\t"<<"YEAR\t\t"<<"POSITION\t\t"<<"SALARY\t\t"<<"Tax"<<endl;
        outfile<<data[i].id<<"\t"<<data[i].name<<"\t\t"<<data[i].father_name<<"\t\t"<<data[i].age<<"\t\t"
               <<data[i].contact<<"\t\t"<<data[i].dept<<"\t\t\t"<<data[i].year<<"\t\t"<<data[i].position<<"\t\t\t"
               <<data[i].salary<<"\t\t"<<tax<<endl;
    }
    outfile.close();
    cout<<"Want to Play again: (y/n)";
    cin>>again;
    while(again!='n');
    return 0; 		
	}
    cout<<"GoodBye Have a nice day!";

}
