	//Open ended lab
#include<iostream>
using namespace std;

struct employee_data //structure to store the data of the employee
{
	int id;
	string name;
	string father_name;
	int age;
	long long int contact_number;
	string department;
	int year_of_joining;
	long long int salary;
	long int income_tax;
	string position;
};

//function prototype
long calculate_income_tax(long long int salary);

int main()
{
	system("cls"); //used to clear previous output screen
	cout<<"\n\n~~ Welcome to the Company ~~\n\n\n";
	
	int employee_size; //employee size from user
	cout<<"\nEnter your number of employees you want to add : ";
	cin>>employee_size;
	
	employee_data *employee[employee_size]; //dynamic array
	int id_num=5001;
	for (int i=0; i<employee_size; i++)
	{
		cout<<"\nEnter data for Employye no "<<i+1<<" : \n";
		employee[i]=new employee_data();
		employee[i]->id=id_num++; //used "->" instead of "." as it is dynamic variable
		
		cout<<"Enter the name of the emoployee : ";
		cin.ignore();
		getline(cin,employee[i]->name);
		
		cout<<"Enter the Father name of the emoployee : ";
		cin.ignore();
		getline(cin,employee[i]->father_name);
		
		cout<<"Enter the age of the employee : ";
		cin>>employee[i]->age;
		
		cout<<"Enter the contact number of the employee : ";
		cin>>employee[i]->contact_number;
		
		cout<<"Enter the Department of the empoloyee : ";
		cin>>employee[i]->department;

		cout<<"Enter the year of joining of the employee : ";
		cin>>employee[i]->year_of_joining;
		
		long long int salary;
		cout<<"Enter the salary of the employee : ";
		cin>>salary;
		employee[i]->salary=salary;
		
		if(salary>=6000)
		{
			long int income_tax = calculate_income_tax(salary);
			employee[i]->income_tax=income_tax;
		}
		else
		{
			employee[i]->income_tax=0;
		}
		cout<<"The income tax on your salary is : "<<employee[i]->income_tax;
		
		

		cout<<"\nEnter the position of the emoployee : ";
		cin.ignore();
		getline(cin,employee[i]->position);
			
	}
	
	char again;
	do
	{
		system("cls");
		cout<<"\n<><><><><><><><><><><> All THE DATA OF THE EMPLOYEES IS SAVED! <><><><><><><><><><><>\n\n\n";
		cout<<"\nMenu : \n1. Add another employee\n2. Display all the employees\n3. Search an Employee\n4. Logout\n";
		int opt;
		do
		{
			cout<<"Enter your operation : ";
			cin>>opt;
			if(opt>4 || opt<1)
			{
				cout<<"\n~~ Wrong selection ~~\n";
			}
		}
		while(opt>4 || opt<1);
		
		if(opt==1) //adding a new employee
		{
			system("cls");
			cout<<"\n<><><><><><><><><><><> ADDING ANOTHER EMPLOYEE <><><><><><><><><><><>\n\n\n";
			employee_size=employee_size+1;
			employee[employee_size-1]=new employee_data();
			employee[employee_size-1]->id=id_num++;
			
			cout<<"Enter the name of the emoployee : ";
			cin.ignore();
			getline(cin,employee[employee_size-1]->name);
			
			cout<<"Enter the Father name of the emoployee : ";
			cin.ignore();
			getline(cin,employee[employee_size-1]->father_name);
			
			cout<<"Enter the age of the employee : ";
			cin>>employee[employee_size-1]->age;
			
			cout<<"Enter the contact number of the employee : ";
			cin>>employee[employee_size-1]->contact_number;
			
			string department;
			cout<<"Enter the Department of the empoloyee : ";
			cin>>employee[employee_size-1]->department;
	
			cout<<"Enter the year of joining of the employee : ";
			cin>>employee[employee_size-1]->year_of_joining;
			
			long long int salary;
			cout<<"Enter the salary of the employee : ";
			cin>>salary;
			employee[employee_size-1]->salary=salary;
			
			if(salary>6000)
			{
				long int income_tax = calculate_income_tax(salary);
				employee[employee_size-1]->income_tax=income_tax;
			}
			else
			{
				employee[employee_size-1]->income_tax=0;
			}
			cout<<"\nThe income tax on your salary is : "<<employee[employee_size-1]->income_tax;
			
			
			cout<<"\nEnter the position of the emoployee : ";
			cin.ignore();
			getline(cin,employee[employee_size-1]->position);
			cout<<"\n ~ New employee added! ~";
		}
		
		if(opt==2) //displaying all the employees
		{
			system("cls");
			cout<<"\n<><><><><><><><><><><> DISPLAYING ALL EMPLOYEES <><><><><><><><><><><>\n\n\n";
			cout<<"\tid\tName\t\tfather_name\tage\tcontact_number\tdepartment\tyear_of_joining\t\tsalary\t\tincome_tax\tposition\n\n";
			for(int i=0;i<employee_size;i++)
			{
				cout<<i+1<<".\t"<<employee[i]->id<<"\t"<<employee[i]->name<<"\t"<<employee[i]->father_name<<"\t"<<employee[i]->age<<
				"\t"<<employee[i]->contact_number<<"\t"<<employee[i]->department<<"\t\t"<<employee[i]->year_of_joining<<
				"\t\t\t"<<employee[i]->salary<<"\t\t"<<employee[i]->income_tax<<"\t"<<employee[i]->position<<endl;
			}

		}
		if(opt==3)
		{
			system("cls");
			cout<<"\n<><><><><><><><><><><> SEARCH AN EMPLOYEE <><><><><><><><><><><>\n\n\n";
			cout<<"1. Search with ID\n2. Search with name\n";
			int opt1;
			do
			{
				cout<<"\nEnter operation 1 or 2 : ";
				cin>>opt1;
				if(opt1<2 || opt1<1)
				{
					cout<<"\n~~ Wrong selection ~~\n";
				}
			}
			while(opt1<2 || opt1<1);
			
			if(opt==1)
			{
				int id;
				cout<<"\nEnter the Id of the employee : ";
				cin>>id;
				int flag=0;
				for(int i=0;i<employee_size;i++)
				{
					if(id==employee[i]->id)
					{
						flag=1;
						break;
					}
					else
					flag=0;
				}
				if(flag==0)
				{
					cout<<"\n~~ the employee doesn't exists ~~\n";
				}
				if(flag==1)
				{
					for(int i=0;i<employee_size;i++)
					{
						if(id==employee[i]->id)
						{
							cout<<"\n~~ The employees data is as folowing ~~\n";
							cout<<"Employee id              : "<<employee[i]->id<<endl;
							cout<<"Employee name            : "<<employee[i]->name<<endl;
							cout<<"Employee father name     : "<<employee[i]->father_name<<endl;
							cout<<"Employee contact number  : "<<employee[i]->contact_number<<endl;
							cout<<"Employee department      : "<<employee[i]->department<<endl;
							cout<<"Employee year of joining : "<<employee[i]->year_of_joining<<endl;
							cout<<"Employee salary          : "<<employee[i]->salary<<endl;
							cout<<"Employee income tax      : "<<employee[i]->income_tax<<endl;
							cout<<"Employee position        : "<<employee[i]->position<<endl;
							break;
						}
					}
				}
			}
			if(opt==2)
			{
				string name;
				cout<<"\nEnter the name of the employee : ";
				cin>>name;
				int flag=0;
				for(int i=0;i<employee_size;i++)
				{
					if(name==employee[i]->name)
					{
						flag=1;
						break;
					}
					else
					flag=0;
				}
				if(flag==0)
				{
					cout<<"\n~~ the employee doesn't exists ~~\n";
				}
				if(flag==1)
				{
					for(int i=0;i<employee_size;i++)
					{
						if(name==employee[i]->name)
						{
							cout<<"\n~~ The employees data is as folowing ~~\n";
							cout<<"Employee id              : "<<employee[i]->id<<endl;
							cout<<"Employee name            : "<<employee[i]->name<<endl;
							cout<<"Employee father name     : "<<employee[i]->father_name<<endl;
							cout<<"Employee contact number  : "<<employee[i]->contact_number<<endl;
							cout<<"Employee department      : "<<employee[i]->department<<endl;
							cout<<"Employee year of joining : "<<employee[i]->year_of_joining<<endl;
							cout<<"Employee salary          : "<<employee[i]->salary<<endl;
							cout<<"Employee income tax      : "<<employee[i]->income_tax<<endl;
							cout<<"Employee position        : "<<employee[i]->position<<endl;
							break;
						}
					}
				}
			}
			
		}
		if(opt==4)
		{
			break;
		}
		
		cout<<"\n\nDo you want to run the program again? (y/n) : ";
		cin>>again;
	}
	while(again!='n');
	cout<<"\n\n~~ Good Bye have a nice day ! ~~\n";
		
	
}

//function definition
long int calculate_income_tax(long long int salary)
{
	long double tax_rate = 0.05; 
    long double tax_amount = salary * tax_rate;
    return static_cast<long int>(tax_amount);
}
