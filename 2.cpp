#include<iostream>
using namespace std;

class animal {
	public:
	char  name[1000];
	char  age[10000];
	void setA() {
	cout<<"Enter Animal name :";
	cin>> name;
	cout<<"Enter Animal  age :";
	cin>> age;
	cout<<endl;
	}
};
class  Zebra : public animal {
		public:
			void get1() {				
				cout<<"name="<<name<<endl;
				cout<<"age="<<age<<endl;
			}
};
class Dolphin : public animal {
		public:
			void get2() {
				cout<<"name="<<name<<endl;
				cout<<"age="<<age<<endl;
			}
			
};

main() {
 	Zebra k;
	Dolphin o;
	k.setA();
	o.setA();
	k.get1();
	o.get2();

}
