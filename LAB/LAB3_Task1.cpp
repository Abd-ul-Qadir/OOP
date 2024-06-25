#include <iostream>
using namespace std;
class rectangle{
	private:
		float length;
		float width;
		
	public:
		
		void set(float l, float w)
		{
			length=l;
			width=w;
		}
		void display()
		{
			cout<<"The length of rectangle is = "<<length<<endl;
			cout<<"The width of rectangle is = "<<width<<endl;
		}
		void ar(float l, float w)
		{
			float area= l*w; 
			cout<<"The area of rectangle is = "<<area<<endl;
		}
		void peri(float l, float w)
		{
			float perimeter=2*(l+w);
			cout<<"The perimeter of rectangle is = "<<perimeter<<endl;
		}
	
	
};
int main() 
{
	rectangle li;
	float l=6.1,w=3.9;
	li.set(l,w);
	li.display();
	li.ar(l,w);
	li.peri(l,w);
	return 0;
}