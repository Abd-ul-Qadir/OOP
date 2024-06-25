#include <iostream>
using namespace std;

class A{
	private:
		int a;
	public:
		void seta()
		{
			cout<<"Enter Value of a : ";
			cin>>a;
		}
		int get_a()
		{
			return a;
		}
		void showa()
		{
		
		cout<<"Value of a = "<<a<<endl;
		}
};
class B{
	private:
		int b;
	public:
		void setb()
		{
			cout<<"Enter Value of b : ";
			cin>>b;
		}
		int get_b()
		{
			return b;
		}
		void showb()
		{
		
		cout<<"Value of b = "<<b<<endl;
		}
};
class C{
		private:
		int c;
		public:
		void setc()
		{
			cout<<"Enter Value of c : ";
			cin>>c;
		}
		int get_c()
		{
			return c;
		}
		void showc()
		{
		
		cout<<"Value of c = "<<c<<endl;
		}
};
class inherit : public A ,public B ,public C{
	
	
};
int main()
{
	int a,b,c;
	A a1;	B b1;	C c1;
	
	inherit i1;
	
	i1.seta();
	i1.setb();
	i1.setc();
	
	i1.showa();
	i1.showb();
	i1.showc();
	
	a=i1.get_a();
	b=i1.get_b();
	c=i1.get_c();
	
	cout<<"inherited "<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
}