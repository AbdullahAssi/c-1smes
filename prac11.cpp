#include<iostream>
#include<fstream>
#include<string>
using namespace std; 
int main()
{
	ifstream abd;
	abd.open("abdullah.txt");
	if(!abd)
	{
		cout<<"Error 404! FIle not found: ";
	}
	else
	{
		while(!abd.eof())
		{
			string line;
			getline(abd,line);
			cout<<line<<endl;
		}
	}
	abd.close();
	return 0;
}
