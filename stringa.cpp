#include<iostream>
using namespace std;
//function Prototype
void sentence(string sent);
//main function
int main()
{
	cout<<"Enter a sentence: ";
	string sent;//declaring a sentence
	getline(cin, sent);
	sentence(sent);//calling out the function
}

//function definition
void sentence(string sent)
{
	//integers to count
	char one=sent[0];
	int chara=0;
	int letter=0;
	//loop till the end of the string
	for(int i=0;one!='\0';one=sent[++i])
	{
		chara++;//counting all characters
		if (isdigit(one)) //counting all digits
		letter++;		
	}
	//displaying result
	cout<<"The Sentence is '"<<sent<<"'."<<endl;
	cout<<"The number of Characters in this sentence is : "<<chara<<endl;
	cout<<"The number of Letters in this sentence is : "<<letter<<endl;
}

