#include <iostream>
using namespace std;

class student_basic_info{
	public:
		string name,gender;int age;
		void set()
		{
			cout<<"Enter Information of student."<<endl;
			cout<<"Name   : ";
			getline(cin,name);
			cout<<"Age    : ";
			cin>>age;
			cout<<"Gender : ";
			cin.ignore();
			cin>>gender;
		}
		void show()
		{
			cout<<"Name   : "<<name<<endl;
			cout<<"Age    : "<<age<<endl;
			cout<<"Gender : "<<gender<<endl;
		}
};
class student_result_info : public student_basic_info{
	public:
		float obt_marks,total_marks;
		float percentage;
		student_result_info()
		{
			total_marks=500;
		}
		void setobt()
		{
			cout<<"Obtained Marks   : ";
			cin>>obt_marks;
		}
		void percent()
		{
			percentage= (obt_marks*100)/total_marks;
			
		}
		void show1()
		{
			cout<<"Obtained Marks : "<<obt_marks<<endl;
			cout<<"Total Marks    : "<<total_marks<<endl;
			cout<<"Percentage     : "<<percentage<<endl;
		}
};
main()
{
	student_basic_info sb1;
	student_result_info sr1;
	
	sr1.set();
	sr1.setobt();
	sr1.percent();
		
	sr1.show();
	sr1.show1()
}