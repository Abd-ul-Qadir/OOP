#include<iostream>
using namespace std;
int main()
{
	int arr[10],odd,even,pos,neg;
	for(int i=0;i<10;i++)
	{
		cout<<"ENTER "<<i+1<<" NUMBER : ";
		cin>>arr[i];
		if(arr[i]%2==0)
		{
			even++;
		}
		if(arr[i]%2==1)
		{
			odd++;
		}
		if(arr[i]>0)
		{
			pos++;
		}
		if(arr[i]<0)
		{
			neg++;
		}
	}
	for(int n=0;n<10;n++)
	{
		cout<<arr[n]<<endl;
	}
	cout<<"NO OF EVEN : "<<even<<endl;
	cout<<"NO OF ODD : "<<odd<<endl;
	cout<<"NO OF NEGATIVE : "<<neg<<endl;
	cout<<"NO OF POSTIVE : "<<pos<<endl;
}
