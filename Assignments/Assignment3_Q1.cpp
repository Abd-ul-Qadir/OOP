#include <iostream>
using namespace std;
class person {
	public:
		string name,adress,p_no,email_id;
		
		void set() 
		{
			cout<<"Enter Name   : ";
			cin.ignore();
			getline(cin,name);
			cout<<"Enter Adress : ";
			cin.ignore();
			getline(cin,adress);
			cout<<"Enter Phone Number : ";
			cin.ignore();
			getline(cin,p_no);
			cout<<"Enter Email Adress : ";
			cin.ignore();
			getline(cin,email_id);
		}
		void showp()
		{
			cout<<"Name          : "<<name<<endl;
			cout<<"Adress        : "<<adress<<endl;
			cout<<"Phone Number  : "<<p_no<<endl;
			cout<<"Email         : "<<email_id<<endl;
		}

};
class student : public person {
	private:
		string status;
	public:
		void sets()
		{
			cout<<"Enter Student Status : ";
			cin.ignore();
			getline(cin,status);
			
		}
		void shows()
		{
			cout<<"Status         : "<<status<<endl;
		}
};
class date {
	public:
		int day,month,year;
};
class employee : public person {
	public:
		int offno;
		date date_hired;
		long int salary;

		void setemp()
		{
			cout<<"Enter Office No : ";
			cin>>offno;
			cout<<"Enter Salary : ";
			cin>>salary;
			cout<<"Enter Date Hired : "<<endl;
			cout<<"Day   : "<<endl;
			cin>>date_hired.day;
			cout<<"Month : "<<endl;
			cin>>date_hired.month;
			cout<<"Year  : "<<endl;
			cin>>date_hired.year;
		}
		void showemp()
		{
			cout<<"Office No      : "<<offno<<endl;
			cout<<"Salary         : "<<salary<<endl;
			cout<<"Date Hired     : "<<date_hired.day<<"."<<date_hired.month<<"."<<date_hired.year<<"."<<endl;
		}
};
class faculty : public employee {
	private:
		int office_hrs;
		string rank;
	public:
		void setf() {
			cout<<"Enter Office Hours : ";
			cin>>office_hrs;
			cout<<"Enter Rank  : ";
			cin.ignore();
			getline(cin,rank);
		}
		void showf()
		{
			cout<<"Office Hours   : "<<office_hrs<<endl;
			cout<<"Rank           : "<<rank<<endl;
		}
};
class staff : public employee {
	private:
		string title;

	public:
		void setst() 
		{
			cout<<"Enter Staff Title : ";
			cin.ignore();
			getline(cin,title);
		}
		void showst()
		{
			cout<<"Title          : "<<title<<endl;
		}

};
main() 
{
	int choice,n,fs;
	char entry;
	do {

		cout<<endl<<endl<<"********************************************************"<<endl<<endl;
		cout <<"Student   : Press 1 "<<endl;
		cout <<"Employee  : Press 2 "<<endl;
		cin>>choice;
		switch (choice)
		{
			case 1 : 
			{
				cout<<"Enter Number of Students : ";
				cin>>n;
				student s[n];
				for (int i=0; i<n; i++)
				{	
					s[i].set();
					s[i].sets();
				}
				cout<<endl<<endl<<"\t\t\t*******"<<endl;
				cout<<"\t\t\tSTUDENT"<<endl;
				cout<<"\t\t\t*******"<<endl;
				for (int i=0; i<n; i++)
				{	
					s[i].shows();
					s[i].showp();
				}
				break;
			}
			case 2 : 
			{
				cout <<"Faculty   : Press 1 "<<endl;
				cout <<"Staff     : Press 2 "<<endl;
				cin>>choice;
				switch(choice) 
				{
					case 1 : 
					{
						cout<<"Enter Number of Faculty Members : ";
						cin>>n;
						faculty f[n];
						for (int i=0; i<n; i++)
						{
								f[i].set();
								f[i].setemp();
								f[i].setf();
						}
						cout<<endl<<endl<<"\t\t\t*******"<<endl;
						cout<<"\t\t\tFACULTY"<<endl;
						cout<<"\t\t\t*******"<<endl;
						for (int i=0; i<n; i++)
						{
								f[i].showp();
								f[i].showemp();
								f[i].showf();
						}
							break;
					}
					case 2: 
					{
						cout<<"Enter Number of Staff Members : ";
						cin>>n;
						staff st[n];
						for (int i=0; i<n; i++) 
						{
							st[i].set();
							st[i].setemp();
							st[i].setst();
							
						}
						cout<<endl<<endl<<"\t\t\t*****"<<endl;
						cout<<"\t\t\tSTAFF"<<endl;
						cout<<"\t\t\t*****"<<endl;
						for (int i=0; i<n; i++)
						{
								st[i].showp();
								st[i].showemp();
								st[i].showst();
						}
						break;
					}
					default:
						cout<<endl<<"Invalid Choice.";
						break;
					}
					break;
				}
				default:
					cout<<"Invalid Choice";
					break;
			}
				cout<<"Do you want Another Entry (Y/N).  ";
				cin>>entry;
		}
		while(entry== 'y' || entry=='Y');
}