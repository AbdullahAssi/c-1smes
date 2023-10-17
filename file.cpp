#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream file("students.txt");
	if(!file)
	{
		cout<<"Error 404!! File not found!";
	}
	string line;
	while (getline(file,line))
	{
		cout<<line<<endl;
	}
	file.close();
	return 0;
}
