#include<iostream>
using namespace std;
class vehicle{
	public:
		int mileage,price;
		
};
class car:public vehicle{
	private:
		int ownership_cost, warranty, seating_capacity;
		string fuel_type;
	public:
		void set()
		{
			cout<<"Enter Details For the Car: \n";
			cout<<"Mileage: ";
			cin>>mileage;
			cout<<"OwnerShip Cost: ";
			cin>>ownership_cost;
			cout<<"Warranty: ";
			cin>>warranty;
			cout<<"Seating Capacity: ";
			cin>>seating_capacity;
			cout<<"Fuel Type: ";
			cin>>fuel_type;
			cout<<"Price: ";
			cin>>price;
		}
		void display_data()
		{
			cout<<"Details For the Car: \n";
			cout<<"\tMileage: "<<mileage;
			cout<<"\n\tOwnerShip Cost: "<<ownership_cost;
			cout<<"\n\tWarranty: "<<warranty;
			cout<<"\n\tSeating Capacity: "<<seating_capacity;
			cout<<"\n\tFuel Type: "<<fuel_type;
			cout<<"\n\tPrice: "<<price;
		}
};
class audi:public car{
	private:
		string model_type;
	public:
		void set_data()
		{
			set();
			cout<<"Enter Model Type: ";
			cin>>model_type;
		}
		void display()
		{
			display_data();
			cout<<"\n\tModel Type: "<<model_type;
		}
};
class ford:public car{
	private:
		string model_type;
	public:
		void set_data()
		{
			set();
			cout<<"Enter Model Type: ";
			cin>>model_type;
		}
		void display()
		{
			display_data();
			cout<<"\n\tModel Type: "<<model_type;
		}
};
class bajaj:public car{
	private:
		string make_type;
	public:
		void set_data()
		{
			set();
			cout<<"Make type: ";
			cin>>make_type;
		}
		void display()
		{
			display_data();
			cout<<"\n\tMake Type: "<<make_type;
		}
};
class tvs:public car{
	private:
		string make_type;
	public:
		void set_data()
		{
			set();
			cout<<"Make type: ";
			cin>>make_type;
		}
		void display()
		{
			display_data();
			cout<<"\n\tMake Type: "<<make_type;
		}
};
class bike{
	private:
		int cylinders, no_of_gears, fuel_tank_size;
		string cooling_type, wheel_type;
	public:
		
};
int main()
{
	cout<<"Audi:\n";
	audi a;
	a.set_data();
	cout<<"Ford:\n";
	ford f;
	f.set();
	cout<<"Bajaj:\n";
	bajaj b;
	b.set();
	cout<<"TVS:\n";
	tvs t;
	t.set();
	cout<<"Audi:\n";
	a.display();
	cout<<"Ford:\n";
	f.display();
	cout<<"Bajaj:\n";
	b.display();
	cout<<"TVS:\n";
	t.display();
}
