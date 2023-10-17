#include<iostream>
using namespace std;
struct bank{
 	string name;
 	int pin;
 	int balance;
 	int confirm_pin;
};
int main(){
	int lim;
	cout<<"Enter How many accounts you want to Enter: ";
	cin>>lim;
	bank bankdetails[lim];
	for ( int i=0;i<lim; i++)
	{
		cout<<"\n"<<i+1<<endl;
		cout<<"Enter Your Name: ";
		cin>>bankdetails[i].name;
		cout<<"Enter Your Pin: ";
		cin>>bankdetails[i].pin;
		cout<<"Confirm Your Pin : ";
		cin>>bankdetails[i].pin;
		cout<<"ENter Your Balance: ";
		cin>>bankdetails[i].balance;
	}
	cout<<"Your Account details are: "<<endl;
	for(int i=0;i<lim; i++)
	{
		cout<<"\n"<<i+1<<endl;
		cout<<"Your account name is "<<bankdetails[i].name<<endl;
		cout<<"Your account Pin is "<<bankdetails[i].pin<<endl;
		cout<<"Your account Balance is "<<bankdetails[i].balance<<endl;
		
	}
}
