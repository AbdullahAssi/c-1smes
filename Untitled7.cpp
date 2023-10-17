#include<iostream>
#include<fstream>
#include<string>
using namespace std;


struct bank{
	string arr;
	int balance;
	int pin;
	int confirm_pin;
	int pass;
	int op;
	int amount;
	int recipt;
	double cnic;
	int deposit;
};
int main()
{
	{
		ofstream file ("Bankdata.txt");
		if (!file)
		{
			cout<<"Error 404: File not found: "<<endl;
			exit(1);
		}
	int acc_num;
	cout<<"Enter the accounts you want to add:";
	cin>>acc_num;
	bank meezan[acc_num];
	for(int i=0;i<acc_num;i++)
	{
		cout<<"\n"<<i+1<<endl;
		cout<<"Enter the name:";
		cin.ignore();
		getline(cin,meezan[i].arr);
		cout<<"Enter Your CNIC: ";
		cin>>meezan[i].cnic;
		cout<<"Enter balance of your ACCOUNT:";
		cin>>meezan[i].balance;
		cout<<"Enter pin of your account:";
		cin>>meezan[i].pin;
		cout<<"Confirm your pin again:";
		cin>>meezan[i].confirm_pin;
		if(meezan[i].pin==meezan[i].confirm_pin)
	    {
	    	cout<<"CONGRATULATIONS !!!\n";
	    	cout<<"Your pin has been set.\n";
		}        
		else
		{
			cout<<"YOUR PIN DID NOT MATCHED:\nYOUR ACCOUNT IS NOT SAVED\n";
		}
		file<<"User 1"<<i+1<<endl;
		file<<"User Account details are: ";
		file<<"User Name: "<<meezan[i].arr<<endl;
		file<<"User CNIC: "<<meezan[i].cnic<<endl;
		file<<"Account Pin: "<<meezan[i].pin<<endl;
		file<<"Account Balance: "<<meezan[i].balance<<endl;

	}
 file.close();
 system("CLS");
		for(int i=0;i<acc_num;i++)
		if(meezan[i].pin==meezan[i].confirm_pin)
		{
			cout<<"\nEnter the pin of your account:";
			cin>>meezan[i].pass;
			for(int i=0;i<acc_num;i++)
			{
				if(meezan[i].pass==meezan[i].pin)
				{
					cout<<"ACCOUNT NAME="<<meezan[i].arr<<endl;
					cout<<"YOUR BALANCE="<<meezan[i].balance<<endl;
					cout<<"\n\nEnter the operation you want to perform:"<<endl;
					cout<<"\n1.CASH WITHDRAWL"<<endl;
					cout<<"2.CASH DEPOSIT"<<endl;
					cout<<"3.Check Balance"<<endl;
					cin>>meezan[i].op;
					if(meezan[i].op==1)
					{
						cout<<"Enter the amount you want to Withdraw:";
						cin>>meezan[i].amount;
						cout<<"\nDo you want a recipt(charges 3 RS)=";
						cout<<"\nPRESS 1 FOR YES AND 2 FOR NO:";
						cin>>meezan[i].recipt;
						if(meezan[i].recipt==1 && meezan[i].amount<meezan[i].balance)
						{
						cout<<"\n\nYour remaining balance is=";
						cout<<meezan[i].balance-meezan[i].amount-3;
						}
						else if(meezan[i].recipt==2)
						{
							cout<<"\n\nYour remaining balance is=";
						    cout<<meezan[i].balance-meezan[i].amount;	
						}
					}
					else if (meezan[i].op ==2)
					{
						cout<<"Enter the amount you want to Deposit:";
						cin>>meezan[i].deposit;
						cout<<"Your Increased balance is =";
						cout<<meezan[i].balance+meezan[i].deposit;
					}
					else if (meezan[i].op==3)
					{
						cout<<"Your Balance is : "<<meezan[i].balance;
					}
					else if (meezan[i].op ==4)
					{
						cout<<"Invalid Command";
					}
				}
			}
		}
	}
}

