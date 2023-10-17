#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream abd;
	abd.open("abd.txt");
	if(!abd)
	{
		cout<<"File not found: Error 404;";
	}
	while(!abd.eof())
	{
		string line;
		getline(abd,line);
		cout<<line;
	}
	abd.close();
}
