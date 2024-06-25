#include <iostream>
using namespace std;
class vehicle{
	protected:
		int mileage,price;
	public:
		vehicle()
		{
			
		}
		~vehicle()
		{
			
		}
		void set()
		{
			
			cout<<"Mileage : ";
			cin>>mileage;
			cout<<"Price  : ";
			cin>>price;
		}
		void show(){
			cout<<"Mileage : "<<mileage<<endl;
			cout<<"Price  : "<<price<<endl;
		}
};
class car : public vehicle{
	protected:
		int ownership_cost,warranty,seat_capacity;
		string fuel_type;
	public:
		car()
		{
			
		}
		~car()
		{
			
		}
		void setcar()
		{
			cout<<"Owner ship cost  : ";
			cin>>ownership_cost;
			cout<<"Warranty : ";
			cin>>warranty;
			cout<<"Seat Capacity : ";
			cin>>seat_capacity;
			cout<<"Fuel Type(Petrol/Diesel) : ";
			cin>>fuel_type;
		}
		void showcar(){
			cout<<"Owner ship cost          : "<<ownership_cost<<endl;
			cout<<"Warranty                 : "<<warranty<<endl;
			cout<<"Seat Capacity            : "<<seat_capacity<<endl;
			cout<<"Fuel Type(Petrol/Diesel) : "<<fuel_type<<endl;
		}
};

class bike : public vehicle{
	protected:
		int no_of_cylinders,no_of_gears,fueltank_size;
		string cool_type,wheel_type;
		
	public:
		bike()
		{
			
		}
		~bike()
		{
			
		}
	void setbike()
	{
		cout<<"No of Cylinders  : ";
		cin>>no_of_cylinders;
		cout<<"No of Gears : ";
		cin>>no_of_gears;
		cout<<"Fuel Tank Size(inches) : ";
		cin>>fueltank_size;
		cout<<"Cool Type : ";
		cin>>cool_type;
		cout<<"Wheel Type : ";
		cin>>wheel_type;
	}	
	void showbike()
	{
		cout<<"No of Cylinders  : "<<no_of_cylinders<<endl;
		cout<<"No of Gears : "<<no_of_gears<<endl;
		cout<<"Fuel Tank Size(inches) : "<<fueltank_size<<endl;
		cout<<"Cool Type : "<<endl<<cool_type<<endl;
		cout<<"Wheel Type : "<<wheel_type<<endl;
	}
	
};
class audi: public car{
	private:
		string model_type;
		
	public:
		audi()
		{
			
		}
		~audi()
		{
			
		}
		void setaudi()
		{
			cout<<"\t\t****"<<endl;
			cout<<"\t\tAudi"<<endl;
			cout<<"\t\t****"<<endl;
			cout<<"Enter following Information of Veicle : "<<endl;
			cin.ignore();
			cout<<"Enter Model Type of Audi : ";
			getline(cin,model_type);
		}
			void showaudi()
		{
			cout<<"\t\t****"<<endl;
			cout<<"\t\tAudi"<<endl;
			cout<<"\t\t****"<<endl;
			cout<<"Model Type : "<<model_type<<endl;
		}	
};
class ford : public car{
		private:
		string model_type;
		
		public:
			ford()
			{
				
			}
			~ford()
			{
				
			}
			void setford()
			{
				
				cout<<"\t\t****"<<endl;
				cout<<"\t\tFord"<<endl;
				cout<<"\t\t****"<<endl;
				cout<<"Enter following Information of Veicle : "<<endl;
				cout<<"Enter Model Type of Ford : ";
				getline(cin,model_type);
			}	
				void showford()
			{
				cout<<"\t\t****"<<endl;
				cout<<"\t\tFord"<<endl;
				cout<<"\t\t****"<<endl;
				cout<<"Model Type : "<<model_type<<endl;
		}
};
class bajaj : public bike{
		private:
		string make_type;
		
	public:
		bajaj()
		{
			
		}
		~bajaj()
		{
			
		}
		void setbajaj()
		{
			cout<<"\t\t*****"<<endl;
			cout<<"\t\tBajaj"<<endl;
			cout<<"\t\t*****"<<endl;
			cout<<"Enter following Information of Veicle : "<<endl;
			cin.ignore();
			cout<<"Enter Make Type of Bajaj : ";
			getline(cin,make_type);
		}	
		void showbajaj()
		{
			cout<<"\t\t*****"<<endl;
			cout<<"\t\tBajaj"<<endl;
			cout<<"\t\t*****"<<endl;
			cout<<"Make Type : "<<make_type<<endl;
		}
	
};
class tvs : public bike {
		private:
		string make_type;
		
	public:
		tvs()
		{
			
		}
		~tvs()
		{
			
		}
		void settvs()
		{
			cout<<"\t\t***"<<endl;
			cout<<"\t\tTVS"<<endl;
			cout<<"\t\t***"<<endl;
			cout<<"Enter following Information of Veicle : "<<endl;
			cin.ignore();
			cout<<"Enter Make Type of TVS  : ";
			getline(cin,make_type);
		}
			void showtvs()
		{
			cout<<"\t\t***"<<endl;
			cout<<"\t\tTVS"<<endl;
			cout<<"\t\t***"<<endl;
			cout<<"Make Type : "<<make_type<<endl;
		}	
};
main()
{
	
	
	ford f1;audi a1;
	
	tvs t1;bajaj b1;
	
	f1.setford();
	f1.setcar();
	f1.set();
	
	a1.setaudi();
	a1.setcar();
	a1.set();
	
	t1.settvs();
	t1.setbike();
	t1.set();
	
	b1.setbajaj();
	b1.setbike();
	b1.set();
	
	
	f1.showford();
	f1.showcar();
	f1.show();
	
	a1.showaudi();
	a1.showcar();
	a1.show();
	
	t1.showtvs();
	t1.showbike();
	t1.show();
	
	b1.showbajaj();
	b1.showbike();
	b1.show();
}
