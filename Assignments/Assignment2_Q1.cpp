#include <iostream>
using namespace std;
class vehicle {
	public:
		void display() {
			cout<<" \"I am Vehicle \"."<<endl;
		}
};
class car: public vehicle {
	public:
		void show(){
			cout<<" \"I am Car\"."<<endl;
		}
};
class honda : public car {
	public:
		void getdata(){
			cout<<" \"I belong to both the categories: Vehicle as well as Car \"."<<endl;
	}
};

int main() {
	vehicle v1;
	car c1;
	honda h1;
	
	v1.display();
	c1.show();
	h1.getdata();
	h1.display();
	h1.show();
}
