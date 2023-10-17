#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

float CGPA(float,float,float,float,float);
struct student
{
	string student_name;
	int Registration_no;
	float marks1;
	float marks2;
	float marks3;
	float marks4;
	float marks5;
	float GPA;
};
int main()
{
	student STUD;

	cout<<"Name: ";cin>>STUD.student_name;
	cout<<"Registration No: ";cin>>STUD.Registration_no;
	cout<<"Enter Marks for 5 subjects: ";
	cin>>STUD.marks1;
	cin>>STUD.marks2;
	cin>>STUD.marks3;
	cin>>STUD.marks4;
	cin>>STUD.marks5;
	STUD.GPA=CGPA(STUD.marks1,STUD.marks2,STUD.marks3,STUD.marks4,STUD.marks5);
if(STUD.GPA)
{
	cout<<"Invalid Input.\n";
	exit(0);
}
	cout<<setw(15)<<"Student Name     "<<setw(25)<<"Registration No."<<setw(15)<<"Marks 1"<<setw(15)<<"Marks 2"<<setw(15)<<"Marks 3"<<setw(15)<<"Marks 4"<<setw(15)<<"Marks 5"<<setw(15)<<"GPA\n";
	cout<<setw(15)<<STUD.student_name<<setw(15)<<STUD.Registration_no<<setw(15)<<STUD.marks1<<setw(15)<<STUD.marks2<<setw(15)<<STUD.marks3<<setw(15)<<STUD.marks4<<setw(15)<<STUD.marks5<<setw(15)<<STUD.GPA<<endl;

	
return 0;
}
float CGPA(float p,float q,float r,float s,float t)
{
	float p_marks=(p+q+r+s+t)/5;
	
	if(p_marks>=9.5 && p_marks<=10)
	return(3.9);

	else if(p_marks<9.5 && p_marks>=8)
	return(3.0);
	
	else if(p_marks<8 && p_marks>=4)
	return(2.0);
	
	else if(p_marks<4 && p_marks>=0)
	return(1.5);
	
	else
	{
    return(999);
	}
    }
