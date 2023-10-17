#include<iostream>
using namespace std;
main()
{
	int acc_num;
	cout<<"Enter the accounts you want to add:";
	cin>>acc_num;
	string arr[acc_num];
	int balance[acc_num];
	int pin[acc_num];
	int confirm_pin[acc_num];
	
	for(int i=0;i<acc_num;i++)
	{
		cout<<"\n"<<i+1<<endl;
		cout<<"Enter the name:";
		cin>>arr[i];
		cout<<"Enter balance of your ACCOUNT:";
		cin>>balance[i];
		cout<<"Enter pin of your account:";
		cin>>pin[i];
		cout<<"Confirm your pin again:";
		cin>>confirm_pin[i];
		if(pin[i]==confirm_pin[i])
      {
      	cout<<"CONGRATULATIONS !!!\n";
      	cout<<"Your pin has been set.\n";
			  }        
		else
		{
			cout<<"YOUR PIN DID NOT MATCHED:\nYOUR ACCOUNT IS NOT SAVED\n";
        

		}
	}
	int pass;
	int op;
	int amount;
	int recipt;
		for(int i=0;i<acc_num;i++)
	if(pin[i]==confirm_pin[i])
	{
	
	cout<<"\nEnter the pin of your account:";
	cin>>pass;
		for(int i=0;i<acc_num;i++)
		{
	if(pass==pin[i])
	{
		cout<<"ACCOUNT NAME="<<arr[i]<<endl;
		cout<<"YOUR BALANCE="<<balance[i]<<endl;
			cout<<"\n\nEnter the operation you want to perform:"<<endl;
	cout<<"\n1.CASH WITHDRAWL"<<endl;
	cout<<"2.CASH DEPOSIT"<<endl;
	cout<<"3.Check Balance"<<endl;
	cin>>op;
		if(op==1)
		{
				cout<<"Enter the amount you want to Withdraw:";
	cin>>amount;
	cout<<"\nDo you want a recipt(charges 3 RS)=";
	cout<<"\nPRESS 1 FOR YES AND 2 FOR NO:";
	cin>>recipt;
			if(recipt==1 && amount<balance[i])
			{
	cout<<"\n\nYour remaining balance is=";
	cout<<balance[i]-amount-3;
	}
	else if(recipt==2)
	{
		cout<<"\n\nYour remaining balance is=";
	    cout<<balance[i]-amount;	
	}
}
    else if(op==2)
    {			cout<<"Enter the amount you want to Deposit:";
	cin>>amount;
	cout<<"\nDo you want a recipt(charges 3 RS)=";
	cout<<"\nPRESS 1 FOR YES AND 2 FOR NO:";
	cin>>recipt;
    				if(recipt==1&&amount<balance[i])
			{
	cout<<"\n\nYour new balance is=";
	cout<<balance[i]+amount-3;
	}
	else if(recipt==2)
	{
		cout<<"\n\nYour new balance is=";
	    cout<<balance[i]+amount;	
	}
    	
	}
	else if(op=3)
	{
		cout<<"Your balance ="<<balance[i];
	}
    
	
	}
}
}
}
