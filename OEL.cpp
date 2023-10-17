#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
struct employee{
	string name,father_name,contact,dept,position;
	int id,age,yoj,tex;
	double salary;
};

int main(){
	
	ofstream file("Employee data.txt");
	if(!file){
		cout<<"Error 404: File Could not be created!"<<endl;
		exit(1);
	}
	 
	int lim;
	cout<<"Enter the Number of Employes You want to enter in data: ";
	cin>>lim;
	for( int i=0; i<lim; i++)
	{
		employee emp;
		cout<<"\n\nEnter the Data for "<<i<<" Employee"<<endl<<endl<<endl;
		cout<<"Enter Your Id: ";
		cin>>emp.id;
		cout<<"Enter Your Name: ";
		cin.ignore();
		getline(cin,emp.name);
		cout<<"Enter Your Father Name: ";
		cin.ignore();
		getline(cin, emp.father_name);
		cout<<"Enter Your Age:";
		cin>>emp.age;
		cout<<"Enter Your Contact No.: ";
		cin.ignore();
		getline(cin, emp.contact);
		cout<<"Enter Your Department: ";
		cin.ignore();
		getline(cin, emp.dept);
		cout<<"Enter Your Year of Joining: ";
		cin>>emp.yoj;
		cout<<"Enter Your Salary: ";
		cin>>emp.salary;
		cout<<"Your Tax is :"<<endl;
		cout<<"Enter Your Position: ";
		cin.ignore();
		getline(cin, emp.position);	
		
		file<<"Id: "<<i+1<<emp.id<<endl;
		file<<"Name: "<<emp.name<<endl;
		file<<"Father Name: "<<emp.father_name<<endl;
		file<<"Age: "<<emp.age<<endl;
		file<<"Contact No: "<<emp.contact<<endl;g
		file<<"Department: "<<emp.dept<<endl;
		file<<"Year of Joining: "<<emp.yoj<<endl;
		file<<"Salary: "<<emp.salary<<endl;
		file<<"Position: "<<emp.position<<endl;
	file.close();
}
}
