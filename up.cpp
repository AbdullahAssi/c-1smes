#include<iostream>
using namespace std;
void toUpper(char* str);
void toLower(char* str);

int main()
{
	char str[100];
	cout<<"Enter any Random String : ";
	cin.getline(str,100);
	
	toUpper(str);
	cout<<"To Lower Case : "<<str<<endl;
	toLower(str);
	cout<<"To Upper Case : "<<str<<endl;
}


void toUpper(char* str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		str[i]=toupper(str[i]);
	}
}
void toLower(char* str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		str[i]=tolower(str[i]);
	}
}
