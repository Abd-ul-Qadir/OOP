#include <iostream>
using namespace std;
class account{
	private:
		int id;
		double balance;
		float date;
		
	public:
	
	void set(int i,double b,float d)
	{
		id=i;
		balance=b;
		date=d;
				
	}
	account()
		{
			int deposit1,curent;
			balance=0;
			
			cout<<"\t\t\t ACCOUNT SIGNUP "<<endl<<endl;
			cout<<"Enter ID NO for your account : ";
			cin>>id;
			cout<<"------------------------------------------------------------------------"<<endl<<endl;
		}
	
	void withdraw()
	{
		int withdrawal,curent;
		cout<<"------------------------------------------------------------------------"<<endl<<endl;
		cout<<"Your Current Balance in account is "<<balance<<" Rupees."<<endl;
		
		if(balance!=0)
		{
			cout<<"How Much amount You Want to withdaw ";
			cin>>withdrawal;
		if (withdrawal <=balance && withdrawal!=0)
		{
			curent= balance-withdrawal;
			
			balance=curent;
			cout<<"Withdrawal successfull !!!! "<<endl;
			cout<<"Your Current Balance in account is "<<balance<<" Rupees."<<endl;
			
		}else if (withdrawal >balance)
		{	
			cout<<"Insufficient Balance to Withdraw.";
		}
		else
		{
			cout<<"You Entered worng amount";
		}
	}else
	{
		cout<<"Insufficient Balance to withdraw";
	}	
	}
	
	void deposit()
	{
		int deposit1,curent;
		cout<<"------------------------------------------------------------------------"<<endl<<endl;
		cout<<"Enter Amount you want to deposit (Amount must be greater than 1000 ): ";
		cin>>deposit1;
		if (deposit1>1000)
		{
			cout<<"Your entered amount is deposited in your account. "<<endl;
			curent= balance+deposit1;
			balance=curent;		
			cout<<"Your Current Balance in account is "<<balance<<" Rupees."<<endl;
		}
		
	}
	
	void details()
	{
		cout<<endl<<endl<<"Your ID No is "<<id<<endl;
		cout<<"Your Curent Balance is "<<balance<<endl;
	}
};
main()
{
	account user1;
	int p;
	char e;
	do {
			cout<<"Account details  : Press 1"<<endl;
			cout<<"Deposit          : Press 2"<<endl;
			cout<<"Withdraw         : Press 3"<<endl;
			cin>>p;

			switch(p)
			{
				case 1:
					user1.details();
					break;
				
                case 2:
					user1.deposit();
					break;
				
                case 3:
					user1.withdraw();
					break;
				
                default:
					cout<<"Please Enter Correct Number";
					break;
		}
		cout<<endl<<endl<<"Do you want to do another transaction (Y/N)"<<endl<<endl;
		cin>>e;
		}
		while (e=='y'|| e=='Y');
}