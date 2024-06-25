#include <iostream>

using namespace std;

class marks{

	public:
		string name;
		int roll_no,marks;
	
		void set(){
			
			cout<<"Enter Name    : ";
			cin.ignore();
			getline(cin,name);
			cout<<"Enter Roll NO : ";
			cin>>roll_no;
			
		}
		void showdata(){
			cout<<"Name            :  "<<name<<endl;
			cout<<"Roll No         :  "<<roll_no<<endl;
			}
		
};
class physics : public marks{
		public:
			physics(){
				marks=0;
			}
			void setphy(){
				cout<<"Enter Physics Marks : ";
				cin>>marks;
			}
			void showphy (){
				cout<<"Physics Marks   :  "<<marks<<endl;
				
			}	
			int get_marks(){
				return marks;
			} 
};
class chemistry : public marks{
			public:
			chemistry(){
				marks=0;
			}
			void setchem(){
				cout<<"Enter Chemistry Marks : ";
				cin>>marks;
			}
			void showchem (){
				cout<<"Chemistry Marks :  "<<marks<<endl;		
			}
			int get_marks(){
				return marks;
			} 
};
int main ()
{
	int n;
	cout<<"Enter Number of Students : ";
	cin>>n;
	float average = 0;
	int total[n]={0};
	marks m[n];	chemistry c[n]; physics p[n];  
	//setter
	for ( int i=0;i<n;i++)
	{
		cout<<endl<<"Please Enter Student "<<i+1<<" Details:"<<endl<<endl;
		m[i].set();
		c[i].setchem();
		p[i].setphy();
		total[i]+=c[i].get_marks()+p[i].get_marks();
	}
	//display
	for ( int i=0;i<n;i++)
	{
		cout<<endl<<endl<<"\t\t\t\tStudent "<<i+1<<" Details "<<endl;
		m[i].showdata();
		c[i].showchem();
		p[i].showphy();
		cout<<"Total Marks     :  "<<total[i];
		average+=total[i];
	}
	
	average = average/n;
	cout<<endl<<endl<<endl;
	cout<<"Average Marks of class is "<<average; 
	
}
