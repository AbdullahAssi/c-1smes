#include <iostream> 
#include <string> 
using namespace std;
int main()
{
	string country ("Pakistan ");
	string city ("Islamabad");
//	cout << country;
	string str_concate = country + city;	 //concatenate two strings
	cout << str_concate;	
	cout << str_concate.size();		//length of the string
	return 0;
}

