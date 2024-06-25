#include <iostream>
using namespace std;

class publication {
	private:
		string title;
		int price;
	public:

		void set() {
			cout<<"Enter Publication Title : ";
			cin.ignore();
			getline(cin,title);
			cout<<"Enter Publication Price : ";
			cin>>price;
		}
		string get_title() {
			return title;
		}
		int get_price() {
			return price;
		}
		void displaytp() {
			cout<<"Publication Title : "<<title<<endl;
			cout<<"Publication Price : "<<price<<endl;
		}
};
class book : public publication {
	private:
		int page_count;
	public:
		void setpc(int b) {
			page_count=b;


		}
		int get_pg() {
			return page_count;
		}
		void displaypg() {
			cout<<"Book Page Count : "<<page_count<<endl;

		}
};
class tape :public publication {
	private:
		int play_time;
	public:
		void setpt(int t) {
			play_time=t;

		}
		int get_pt() {
			return play_time;
		}

		void displaypt() {
			cout<<"Cassette Play Time : "<<play_time<<endl;

		}

};
main() {
	publication p1;
	book b1;
	tape t1;
	int b,t;
	
	p1.set();
	cout<<"Enter the book page count : ";
	cin>>b;
	cout<<"Enter the cassette play time : ";
	cin>>t;
    
	b1.setpc(b);
	t1.setpt(t);
	
	p1.displaytp();
	b1.displaypg();
	t1.displaypt();
	
}