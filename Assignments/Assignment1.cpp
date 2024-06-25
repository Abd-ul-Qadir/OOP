#include <iostream>
using namespace std;

class student{
      private:
              string name;
              string father_name;
              string semester;
              int id_no;
              float gpa;
              int atendance;
      public:
             void set(string n1, string f1,string s1, int i1, float g1,int atnd1)
             {
                  name=n1;
                  father_name=f1;
                  semester=s1;
                  id_no=i1;
                  gpa=g1;
                  atendance=atnd1;
             }
             
             void display()
             {
                  cout<<"\t\t\t\t\t ****************************"<<endl;
                  cout<<"\t\t\t\t\t UNIVERSITY MANAGEMENT SYSTEM "<<endl;
                  cout<<"\t\t\t\t\t ****************************\n\n\n";
             }
             
             void biodata()
             {
                  cout<<"\t\t\t\t\t ----------------"<<endl;
                  cout<<"\t\t\t\t\t Personal Details"<<endl;
                  cout<<"\t\t\t\t\t ----------------\n\n";
                  cout<<"\t\t Name : "<<name<<endl;
                  cout<<"\t\t Father Name : "<<father_name<<endl;
                  cout<<"\t\t ID NO : "<<id_no<<endl;
                  cout<<"\t\t Semester : "<<semester<<endl;
                  }
             void cgpa()
             {
                  cout<<"\t\t\t\t\t --------------------"<<endl;
                  cout<<"\t\t\t\t\t Academic Performance"<<endl;
                  cout<<"\t\t\t\t\t --------------------"<<endl<<endl;
                  cout<<"\t\t CGPA of the Student is "<<gpa<<endl;
             }
             
             void attendance()
             {
                  cout<<"\t\t Attendance of Student in current Semester is "<<atendance<<endl;
             }
};

int main()
{
    student ss1;
    ss1.set("Abdul Qadir","Sarfraz Ahmed","BSCS-2A",215165,2.4,80);
    ss1.display();
    ss1.biodata();
    ss1.cgpa();
    ss1.attendance();
}
