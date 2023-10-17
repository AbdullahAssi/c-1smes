#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ifstream abd;
	abd.open("employee.txt");
	if(!abd)
	cout<<"File not found: ";
	while(!abd.eof())
	{
		string line;
		getline(abd,line);
		cout<<line<<endl;
	}
	abd.close();
	return 0;
}
