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
		cout<<i+1<<endl;
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
			cout<<"YOUR PIN DID NOT MATCHED:";
		}
	}
	system("cls");
	int pass;
	int op;
	int amount;
	int recipt;
	cout<<"\n\nenter the pin of your account:";
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
	cout<<"Enter the amount you want to Withdraw/Deposit:";
	cin>>amount;
	cout<<"\nDo you want a recipt(charges 3 RS)=";
	cout<<"\nPRESS 1 FOR YES AND 2 FOR NO:";
	cin>>recipt;
		if(op==1&&amount<balance[i])
		{
			if(recipt==1)
			{
	cout<<"\n\nYour Remaining is now =";
	cout<<balance[i]-amount-3;
	}
	else if(recipt==2)
	{
		cout<<"\n\nYour remaining balance is=";
	    cout<<balance[i]-amount;	
	}
}
    else if(op==2)
    {
    	if(recipt==1)
			{
	cout<<"\n\nYour remaining balance is=";
	cout<<balance[i]+amount-3;
	}
	else if(recipt==2)
	{
		cout<<"\n\nYour remaining balance is=";
	    cout<<balance[i]+amount;	
	}
    	
	}
    
	
	}
}
}
