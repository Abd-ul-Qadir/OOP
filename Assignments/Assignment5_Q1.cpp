#include <iostream>
using namespace std;
class employee{
	protected:
		string name; int emp_id;
	public:
		employee()
		{

		}
		void set(string n,int eid)
		{
			name=n;
			emp_id=eid;
		}
		void show()
		{
			cout<<"Name        : "<<name;
			cout<<"Employee ID : "<<emp_id;
		}	
		~employee()
		{

		}
};
class daily_wage_employee : public employee{
	private:
		int hour_income,hours,daily_income;
	
	public:
		daily_wage_employee()
		{
			
		}
		daily_wage_employee(string n,int eid,int hi)
		{
			name=n;
			emp_id=eid;
			hour_income=hi;
		}	
		void calculate_wage()
		{
			
			cout<<"Enter the hours he worked.";
			cin>>hours;
			daily_income= hours*200;
		}
		void showdwe()
		{
			cout<<"\t\t*******************"<<endl;
			cout<<"\t\tDaily Wage Employee"<<endl;
			cout<<"\t\t*******************"<<endl;
			cout<<"Name         : "<<name<<endl;
			cout<<"Employee ID  : "<<emp_id<<endl;
			cout<<"Daily Income : "<<daily_income<<endl;
			cout<<"Worked hours : "<<hours<<endl;
		}
		void set(int hi,int h,int di)
		{
			hour_income=hi;
			hours=h;
			daily_income=di;
		}
		~daily_wage_employee()
		{
			
		}
};
class regular_employee : public employee{
	private:
		int hour_income,salary;
		
	public:
		regular_employee()
		{
			
		}
		regular_employee(string n,int eid,int hi)
		{
			name=n;
			emp_id=eid;
			hour_income=hi;
		}
		void calculate_salary()
		{
			salary=160*250;
						
		}
		void set(int hi, int s)
		{
			hour_income=hi;
			salary=s;
		}
		void showre()
		{
			cout<<"\t\t*******************"<<endl;
			cout<<"\t\tRegular Employee"<<endl;
			cout<<"\t\t*******************"<<endl;
			cout<<"Name           : "<<name<<endl;
			cout<<"Employee ID    : "<<emp_id<<endl;
			cout<<"Monthly Income : "<<salary<<endl;
		}
		~regular_employee()
		{
			
		}
	
};
main()
{
	string name_dw;int id_dw, income_dw;
	cout<<"Enter Information of daily Wage Employee:  "<<endl;
	cout<<"Name: ";
	getline(cin,name_dw);
	cout<<"ID  :  ";
	cin>>id_dw;
	cout<<"Hourly income   : ";
	cin>>income_dw;
	
	daily_wage_employee e1(name_dw,id_dw,income_dw);
	e1.calculate_wage();
	string name_re; int id_re, income_re;
	cin.ignore();
	cout<<"Enter Information of Regular Employee:  "<<endl;
	cout<<"Name: ";
	getline(cin,name_re);
	cout<<"ID  :  ";
	cin>>id_re;
	cout<<"Hourly income   : ";
	cin>>income_re;
	
	
	regular_employee r1(name_re,id_re,income_re);
	r1.calculate_salary();
	
	e1.showdwe();
	r1.showre();	
	
}
