#include<iostream>
#include<fstream>
#include<string>
using namespace std;


struct bank{
	string arr;
	double balance;
	int pin;
	int confirm_pin;
	int pass;
	int op;
	int amount;
	int recipt;
	string cnic;
	int deposit;
};
int main()
{
	int agi;
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
	bank NUTECH[acc_num];
	for(int i=0;i<acc_num;i++)
	{
		cout<<"\n"<<i+1<<endl;
		cout<<"Enter the name:";
		cin.ignore();
		getline(cin,NUTECH[i].arr);
		cout<<"Enter Your CNIC: ";
		cin.ignore();
		getline(cin,NUTECH[i].cnic);
		cout<<"Enter balance of your ACCOUNT:";
		cin>>NUTECH[i].balance;
		do //loop to confirm wether the pin is 4 digit or not
		{
			cout<<"Enter Pin for your account (4 digits): ";
			cin>>NUTECH[i].pin;
			if( NUTECH[i].pin>9999)
			cout<<"\nError! Your Entered Pin is more than 4 digits!!"<<endl;
			if (NUTECH[i].pin<999){
				cout<<"\nError! Your entered Pin is less than 4 digits!"<<endl;
			}
			
			
			//if pin is already taken
			for(int j=0;j<i;j++)
			{
				if(NUTECH[i].pin==NUTECH[j].pin)
				{
cout<<"Sorry this Pin is already taken\n";
					NUTECH[i].pin=10000;
				}
			}
		}
		while(NUTECH[i].pin<999|| NUTECH[i].pin>9999);
		cout<<"Confirm your pin again:";
		cin>>NUTECH[i].confirm_pin;
		if(NUTECH[i].pin==NUTECH[i].confirm_pin)
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
		file<<"User Name: "<<NUTECH[i].arr<<endl;
		file<<"User CNIC: "<<NUTECH[i].cnic<<endl;
		file<<"Account Pin: "<<NUTECH[i].pin<<endl;
		file<<"Account Balance: "<<NUTECH[i].balance<<endl;

	}
 file.close();
 system("CLS");
		for(int i=0;i<acc_num;i++)
		if(NUTECH[i].pin==NUTECH[i].confirm_pin)
		{
	cout<<endl<<"\t\t\t#       #  ######  #       #######  #######  ###   ###  ######\n";
	cout<<"\t\t\t#   #   #  #       #       #        #     #  #  # #  #  #     \n";
	cout<<"\t\t\t#   #   #  ######  #       #        #     #  #   #   #  ######\n";
	cout<<"\t\t\t#  # #  #  #       #       #        #     #  #   #   #  #     \n";
	cout<<"\t\t\t###   ###  ######  ######  #######  #######  #       #  ######\n";
		cout<<"\n\t\t\t       TO NUTECH BANK MANAGEMENT SYSTEM\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------\n\n";
		do{
			cout<<"\nEnter the pin of your account:";
			cin>>NUTECH[i].pass;
			for(int i=0;i<acc_num;i++)
			{
				if(NUTECH[i].pass==NUTECH[i].pin)
				{
					cout<<"ACCOUNT NAME="<<NUTECH[i].arr<<endl;
					cout<<"YOUR BALANCE="<<NUTECH[i].balance<<endl;
					cout<<"\n\nEnter the operation you want to perform:"<<endl;
					cout<<"\n1.CASH WITHDRAWL"<<endl;
					cout<<"2.CASH DEPOSIT"<<endl;
					cout<<"3.Check Balance"<<endl;
					cout<<"4.Logout "<<endl;
					cin>>NUTECH[i].op;
					if(NUTECH[i].op==1)
					{
						cout<<"Enter the amount you want to Withdraw:";
						cin>>NUTECH[i].amount;
						cout<<"\nDo you want a recipt(charges 3 RS)=";
						cout<<"\nPRESS 1 FOR YES AND 2 FOR NO:";
						cin>>NUTECH[i].recipt;
						if(NUTECH[i].recipt==1 && NUTECH[i].amount<NUTECH[i].balance)
						{
						cout<<"\n\nYour remaining balance is=";
						cout<<NUTECH[i].balance-NUTECH[i].amount-3;
						}
						else if(NUTECH[i].recipt==2)
						{
							cout<<"\n\nYour remaining balance is=";
						    cout<<NUTECH[i].balance-NUTECH[i].amount;	
						}
					}
					else if (NUTECH[i].op ==2)
					{
						cout<<"Enter the amount you want to Deposit:";
						cin>>NUTECH[i].deposit;
						cout<<"Your Increased balance is =";
						cout<<NUTECH[i].balance+NUTECH[i].deposit;
					}
					else if (NUTECH[i].op==3)
					{
						cout<<"Your Balance is : "<<NUTECH[i].balance;
					}
					else if(NUTECH[i].op==4){
						break;
					}
					else if (NUTECH[i].op ==5)
					{
						cout<<"Invalid Command";
					}
				}
			}
		
			
		}
			while(again!=0);		
		cout<<"\n\nWant to Enter account again? y/n : ";
		cin>>again;

	}
	while(again!='n');
	cout<<"\n\n~~ Good Bye Have a Nice day! ~~ ";
}