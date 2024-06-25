#include <iostream>
using namespace std;
class shape{
	public:
		void showshape(){
			cout<<"\"This is a Shape.\""<<endl;
		}
};
class polygon:public shape{
	public:
		void showpol(){
			cout<<"\"Polygon is a Shape\"."<<endl;
		}
};
class rectangle:public polygon{
	public:
		void showrect(){
			cout<<"\"Rectangle is a Polygon\"."<<endl;
		}
};
class triangle:public polygon{
	public:
		void showtri(){
			cout<<"\"Triangle is a Polygon\"."<<endl;
		}
};
class square:public rectangle{
	public:
		void showsq(){
			cout<<"\"Square is rectangle \"."<<endl;
		}
};
main()
{
	shape s; polygon p; rectangle r; triangle t; square sq;
	s.showshape();
	p.showpol();
	r.showrect();
	t.showtri();
	sq.showsq();
	
	p.showshape();
	
	r.showshape();
	r.showpol();
	
	t.showshape();
	t.showpol();
	
	sq.showshape();
	sq.showpol();
	sq.showrect();
}
