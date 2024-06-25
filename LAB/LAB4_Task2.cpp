#include <iostream>
#include <string>
using namespace std;
class rectangle{
	
	private:
		float length;
		float breadth;
		
	public:
	void set(float l,float b)
	{
		length=l;
		breadth=b;
	}	
	void get()
	{
		cout<<"The length of Rectangle is "<<length<<endl;
		cout<<"The Breadth of Rectangle is "<<breadth<<endl;
	}
	void area()
	{
		float aria=length*breadth;
		cout<<"The Area of Rectangle is "<<aria<<endl<<endl<<endl;
	}
	rectangle()
	{
		length=0;
		breadth=0;
	}
	rectangle(float l, float b)
	{
		length=l;
		breadth=b;
	}
	rectangle(float o)
	{
		length=o;
		breadth=o;
	}
};
main()
{
	rectangle r1;
	r1.get();
	r1.area();
	rectangle r2(2.4,2.5);
	r2.get();
	r2.area();
	rectangle r3(1.4);
	r3.get();
	r3.area();
	
	return 0;
}