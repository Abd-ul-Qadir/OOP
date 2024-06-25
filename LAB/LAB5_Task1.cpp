#include <iostream>
#include <string>

using namespace std;

class student {
	 
	private:
		string fname;
		string lname;
		int roll_no;
		string classs;
		float total;
		float percentage;
		int id_no;
		
	public:
		void set(string fn,string ln,string c,int rn,float t,float p,int i)
			{
				fname=fn;
				lname=ln;
				roll_no=rn;
				classs=c;
				total=t;
				percentage=p;
				id_no=i;
				 }
				 
			void show(){
				cout<<"Name       : "<<fname<<" "<<lname<<endl;
				cout<<"ID No    : "<<roll_no<<endl;
				cout<<"Roll No    : "<<roll_no<<endl;
				cout<<"Class      : "<<classs<<endl;
				cout<<"Total No   : "<<total<<endl;
				cout<<"Percentage : "<<percentage<<" % "<<endl;
			}	 
};
main()
{
	student stu[5];
	int rn,id=0;
	float phy,math,eng,total,percent;
	string fname,lname,cls;
	for ( int i=0;i<5;i++)
	{
		id++;
		
		cout<<" Pleae Enter Student "<<i+1<<" Information."<<endl;
		
		cout<<"Enter First Name : ";
		cin.ignore();
		getline(cin,fname);
		
		cout<<"Enter Last Name : ";
		cin.ignore();
		getline(cin,lname);
		cout<<"Enter Class : ";
		cin.ignore();
		getline(cin,cls);
		cout<<"Enter Roll Number : ";
		cin>>rn;
		
		do{
		cout<<"Enter Physics Marks out of 100 : ";
		cin>>phy;
		if (phy >100 || phy<0)
			cout<<"Please enter correct marks : "<<endl;
		}while (phy >100|| phy<0);
	
	
		do{
		
			cout<<"Enter English Marks out of 100: ";
			cin>>eng;
			if ( eng>100 || eng<0)
			cout<<"Please enter correct marks : "<<endl;
		}while (eng >100|| eng<0);
	
		do{
		
			cout<<"Enter Maths Marks out of 100: ";
			cin>>math;
			if (math >100 || math<0)
			cout<<"Please enter correct marks : "<<endl;
		}while (math >100|| math<0);
		
			total= phy+math+eng;
			percent=(total/300)*100;
			
			stu[i].set(fname,lname,cls,rn,total,percent,id);
		
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"Student "<<i+1<<" Details : "<<endl;
		stu[i].show();
		
	}
}
