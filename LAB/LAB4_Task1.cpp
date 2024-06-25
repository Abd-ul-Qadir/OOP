#include <iostream>
#include <string>
using namespace std;

class student{
		private:
			int roll_no;
			string first_name;
			string last_name;
			string clas;
			string grade;
			float marks;
		
		public:
		
			student()
			{
					cout<<"\t\t\t BSCS"<<endl;	
			}
			void set(int rn, string fn, string ln, string c, float m, string g)
			{
				roll_no=rn;
				first_name=fn;
				last_name=ln;
				clas=c;
				marks=m;
				grade=g;
			}
			void printdata()
			{
				cout<<endl<<"Roll No : "<<roll_no<<endl;
				cout<<"Name    : "<<first_name<<" "<<last_name<<endl;
				cout<<"Marks   : "<<marks<<endl;
				cout<<"Grade   : "<<grade<<endl;
			}
};

int main()
{
	int roll;
	string first,last,grade,cls;
	float mark;
	
	student s1;
	
	cout<<"Please Enter your First Name : ";
	getline(cin,first);
	
	cout<<"Please Enter your Last Name : ";
	getline(cin,last);
	
	cout<<"Please Enter your grade : ";
	getline(cin,grade);
	cout<<"Please Enter your Roll Number : ";
	cin>>roll;

	cout<<"Please Enter your Marks : ";
	cin>>mark;
	
	s1.set(roll,first,last,cls,mark,grade);
	s1.printdata();
	
}
