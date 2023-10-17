#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int converter(string str);
int main()
{
	string table[11][3];
	cout<<"Enter Country name, capital name and population: ";
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<3;j++)
			cin>>table[i][j];
	}
	cout<<setw(20)<<"Country Name"<<setw(20)<<"Capital Name"<<setw(20)<<"Population"<<endl;
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<setw(20)<<table[i][j];
		}
	cout<<endl;
	}
	//for maximum
	int k=2;
	int max=converter(table[1][k]);
	for(int j=2;j<10;j++)
	{
		if(converter(table[j][k])>max)
			max=converter(table[j][k]);	
	}
	cout<<"Maximum Population: "<<max<<endl;
	int z=2;
	int min=converter(table[1][z]);
	for(int j=2;j<10;j++)
	{
		if(converter(table[j][z])<min)
			min=converter(table[j][z]);
	}
	cout<<"Minimum Population: "<<min<<endl;
	return 0;
}
int converter(string str) 
{ 
    int num = 0; 
    int n = str.length(); 
  
    // Iterate till length of the string 
    for (int i = 0; i < n; i++) 
  
        // Converting character into its integer
        num = num * 10 + (int(str[i]) - 48); 
  
    // Print the answer 
    return(num);
} 
