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
	char again;
	do
	{
		ofstream file ("BankData.txt");
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
		do //loop to confirm wether the pin is 4 digit or not
		{
			cout<<"Enter Pin for your account (4 digits): ";
			cin>>meezan[i].pin;
			
			//if pin is already taken
			for(int j=0;j<i;j++)
			{
				if(meezan[i].pin==meezan[j].pin)
				{
					cout<<"Sorry this Pin is already taken\n";
					meezan[i].pin=10000;
				}
			}
		}
		while(meezan[i].pin<0 || meezan[i].pin>9999);
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
	cout<<endl<<"\t\t\t#       #  ######  #       #######  #######  ###   ###  ######\n";
	cout<<"\t\t\t#   #   #  #       #       #        #     #  #  # #  #  #     \n";
	cout<<"\t\t\t#   #   #  ######  #       #        #     #  #   #   #  ######\n";
	cout<<"\t\t\t#  # #  #  #       #       #        #     #  #   #   #  #     \n";
	cout<<"\t\t\t###   ###  ######  ######  #######  #######  #       #  ######\n";
		cout<<"\n\t\t\t       TO MEEZAN BANK MANAGEMENT SYSTEM\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------\n\n";
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
					cout<<"4.Logout "<<endl;
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
					else if(meezan[i].op==4){
						break;
					}
					else if (meezan[i].op ==5)
					{
						cout<<"Invalid Command";
					}
				}
			}
		}
		cout<<"\n\nWant to Enter account again? y/n : ";
		cin>>again;
	}
	while(again!='n');
	cout<<"\n\n~~~~~~~~~~~~ Good Bye Have a Nice day! ~~~~~~~~~~~~ ";
}
