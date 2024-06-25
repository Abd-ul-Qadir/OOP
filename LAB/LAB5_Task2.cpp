#include <iostream>
using namespace std;
class info{
	private:
		string name;
		string adress;
		int std_tele;
		long int telephone;
		long int mobile;
		string head;
		
	public:
		void set (){
			char tn,mn;
			cout<<"Enter Name   : ";
			cin.ignore();
			getline(cin,name);
			cout<<"Enter Adress : ";
			cin.ignore();
			getline(cin,adress);
			cout<<"Do you have telephone number (Y/N)";
			cin>>tn;
			if (tn == 'y' || tn == 'Y')
			{
					cout<<"Enter Standard code  : ";
					cin>>std_tele;
					cout<<"Enter Telephone No : ";
					cin>>telephone;
			}
			
			cout<<"Do you have Mobile number (Y/N)";
			cin>>mn;
			if (mn == 'y' || mn == 'Y')
			{
				cout<<"Enter Mobile No : ";
				cin>>mobile;
			}
			
			cout<<"Enter Name Of Head Of the Family : ";
			cin.ignore();
			getline(cin,head);
		}	
		void display(){
			cout<<"Name               : "<<name<<endl;
			cout<<"Adress             : "<<adress<<endl;
			cout<<"Telephone No       : ("<<std_tele<<")"<<telephone<<endl;
			cout<<"Mobile No          : "<<mobile<<endl;
			cout<<"Head Of the Family :"<<head<<endl;
		}
};
main()
{
	int n;
	cout<<"Enter number of members : ";
	cin>>n;
	info m1[n];
	for (int i =0;i<n;i++)
	{
		cout<<endl<<"Enter Member "<<i+1<<" Information ."<<endl;
		m1[i].set();
	}
	for (int i =0;i<n;i++)
	{
		cout<<"Member "<<i+1<<" Information :"<<endl;
		m1[i].display();
	}
	
}
