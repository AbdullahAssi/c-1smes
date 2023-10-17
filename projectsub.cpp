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
	ofstream file ("BankData.txt");
	if (!file)
	{
		cout<<"Error 404: File not found: "<<endl;
		exit(1);
	}
	int acc_num;
	cout<<"Enter the accounts you want to add:";
	cin>>acc_num;
	bank *NUTECH[acc_num];
	for(int i=0;i<acc_num;i++)
	{
		NUTECH[i]=new bank();  //added this here , and changed ever dot(.) in (->)
		cout<<"\n"<<i+1<<endl;
		cout<<"Enter the name:";
		cin.ignore();
		getline(cin,NUTECH[i]->arr);
		cout<<"Enter Your CNIC: ";
		cin.ignore();
		getline(cin,NUTECH[i]->cnic);
		cout<<"Enter balance of your ACCOUNT:";
		 cin>>NUTECH[i]->balance;
		do //loop to confirm wether the pin is 4 digit or not
		{
			cout<<"Enter Pin for your account (4 digits): ";
			cin>>NUTECH[i]->pin;
			if( NUTECH[i]->pin>9999)
			cout<<"\nError! Your Entered Pin is more than 4 digits!!"<<endl;
			if (NUTECH[i]->pin<999){
				cout<<"\nError! Your entered Pin is less than 4 digits!"<<endl;
			}
			
			
			//if pin is already taken
			for(int j=0;j<i;j++)
			{
				if(NUTECH[i]->pin==NUTECH[j]->pin)
				{
					cout<<"Sorry this Pin is already taken\n";
					NUTECH[i]->pin=10000;
				}
			}
		}
		while(NUTECH[i]->pin<999|| NUTECH[i]->pin>9999);
		file<<"User 1"<<i+1<<endl;
		file<<"User Account details are: ";
		file<<"User Name: "<<NUTECH[i]->arr<<endl;
		file<<"User CNIC: "<<NUTECH[i]->cnic<<endl;
		file<<"Account Pin: "<<NUTECH[i]->pin<<endl;
		file<<"Account Balance: "<<NUTECH[i]->balance<<endl;
	}
	file.close();
	char again;
	do
	{
		system("CLS");
		cout<<endl<<"\t\t\t\t\t\t\t\t#       #  ######  #       #######  #######  ###   ###  ######\n";
		cout<<"\t\t\t\t\t\t\t\t#   #   #  #       #       #        #     #  #  # #  #  #     \n";
		cout<<"\t\t\t\t\t\t\t\t#   #   #  ######  #       #        #     #  #   #   #  ######\n";
		cout<<"\t\t\t\t\t\t\t\t#  # #  #  #       #       #        #     #  #   #   #  #     \n";
		cout<<"\t\t\t\t\t\t\t\t###   ###  ######  ######  #######  #######  #       #  ######\n";
		cout<<"\n\t\t\t\t\t\t\t\t       TO NUTECH BANK MANAGEMENT SYSTEM\n";
		cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
	
		
	
		cout<<"\n\nMENU:\n1. Add another account\n2. Login to your account \n3. End\n"; //added this menu
		int no; //added this
		do
		{
			cout<<"\nEnter your command : ";
			cin>>no;
		}
		while(no>3 || no<1);
		
		
		
		if(no==1)//add another account
		{
			ofstream file ("BankData.txt");
			if (!file)
			{
				cout<<"Error 404: File not found: "<<endl;
				exit(1);
			}
			acc_num++;
			NUTECH[acc_num-1]=new bank();
			
			cout<<"\n"<<acc_num-1+1<<endl;
			cout<<"Enter the name:";
			cin.ignore();
			getline(cin,NUTECH[acc_num-1]->arr);
			cout<<"Enter Your CNIC: ";
			cin.ignore();
			getline(cin,NUTECH[acc_num-1]->cnic);
			cout<<"Enter balance of your ACCOUNT:";
			cin>>NUTECH[acc_num-1]->balance;
			do //loop to confirm wether the pin is 4 digit or not
			{
				cout<<"Enter Pin for your account (4 digits): ";
				cin>>NUTECH[acc_num-1]->pin;
				if( NUTECH[acc_num-1]->pin>9999)
				cout<<"\nError! Your Entered Pin is more than 4 digits!!"<<endl;
				if (NUTECH[acc_num-1]->pin<999){
					cout<<"\nError! Your entered Pin is less than 4 digits!"<<endl;
				}
				
				
				//if pin is already taken
				for(int j=0;j<acc_num;j++)
				{
					if(NUTECH[acc_num-1]->pin==NUTECH[j]->pin)
					{
						cout<<"Sorry this Pin is already taken\n";
						NUTECH[acc_num-1]->pin=10000;
					}
				}
			}
			while(NUTECH[acc_num-1]->pin<999|| NUTECH[acc_num-1]->pin>9999);
			file<<"User 1"<<acc_num+1<<endl;
			file<<"User Account details are: ";
			file<<"User Name: "<<NUTECH[acc_num-1]->arr<<endl;
			file<<"User CNIC: "<<NUTECH[acc_num-1]->cnic<<endl;
			file<<"Account Pin: "<<NUTECH[acc_num-1]->pin<<endl;
			file<<"Account Balance: "<<NUTECH[acc_num-1]->balance<<endl;
			file.close();
			
		}
		if(no==2)//login
		{
			system("cls");
			int agi;
			for(int i=0;i<acc_num;i++)
			do
			{
				cout<<"\nEnter the pin of your account : ";
				cin>>NUTECH[i]->pass;
				for(int i=0;i<acc_num;i++)
				{
					if(NUTECH[i]->pass==NUTECH[i]->pin)
					{
						cout<<"ACCOUNT NAME="<<NUTECH[i]->arr<<endl;
						cout<<"YOUR BALANCE="<<NUTECH[i]->balance<<endl;
						cout<<"\n\nEnter the operation you want to perform:"<<endl;
						cout<<"\n1.CASH WITHDRAWL"<<endl;
						cout<<"2.CASH DEPOSIT"<<endl;
						cout<<"3.Check Balance"<<endl;
						cout<<"4.Logout "<<endl;
						cin>>NUTECH[i]->op;
						if(NUTECH[i]->op==1)
						{
							cout<<"Enter the amount you want to Withdraw:";
							cin>>NUTECH[i]->amount;
							cout<<"\nDo you want a recipt(charges 3 RS)=";
							cout<<"\nPRESS 1 FOR YES AND 2 FOR NO:";
							cin>>NUTECH[i]->recipt;
							if(NUTECH[i]->recipt==1 && NUTECH[i]->amount<NUTECH[i]->balance)
							{
							cout<<"\n\nYour remaining balance is=";
							cout<<NUTECH[i]->balance-NUTECH[i]->amount-3;
							}
							else if(NUTECH[i]->recipt==2)
							{
								cout<<"\n\nYour remaining balance is=";
							    cout<<NUTECH[i]->balance-NUTECH[i]->amount;	
							}
						}
						else if (NUTECH[i]->op ==2)
						{
							cout<<"Enter the amount you want to Deposit:";
							cin>>NUTECH[i]->deposit;
							cout<<"Your Increased balance is =";
							cout<<NUTECH[i]->balance+NUTECH[i]->deposit;
						}
						else if (NUTECH[i]->op==3)
						{
							cout<<"Your Balance is : "<<NUTECH[i]->balance;
						}
						else if(NUTECH[i]->op==4){
							break;
						}
						else if (NUTECH[i]->op ==5)
						{
							cout<<"Invalid Command";
						}
					}
				}
				cout<<"\n Want to Enter account details again: 1/0: ";
			  	cin>>agi;
			}while(agi!=0);
		}
		if(no==3)
		{
			break;
		} 
	}
	while(again!='n');
	
	cout<<"\n\n~~ Good Bye Have a Nice day! ~~ ";
}
