#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream abd;
	abd.open("abd.txt");
	while(!abd.eof())
	{
		string line;
		getline(abd,line);
		cout<<line;
	}
	abd.close();
}
