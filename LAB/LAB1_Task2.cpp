#include<iostream>
using namespace std;

int main()
{
	int days;
	
	cout<<"HOW MUCH DAYS YOU SUBMIT LATE"<<endl;
	cin>>days;
	if(days<=5){
        cout<<"YOUR FINE IS RS 50";
    }
    else if(days<=10){
        cout<<"YOUR FINE IS RS 100";
    }
    
    if(days>10 && days<=30){
        cout<<"YOUR FINE IS RS 500";
    }
    if(days>30){
        cout<<"SIR YOUR MEMBERSHIP IS CANCELLED ";
    }
}
