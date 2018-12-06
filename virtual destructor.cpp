#include<iostream>
using namespace std;
class one{
	public: one(){
		cout<<"in base";
	}
	virtual ~one(){
		cout<<"in base destructor";
	}
};
class derived:public base{
	public: derived(){
		cout<<"in derived";
	}
	~derived(){
		cout<<"in derived destructor";
	}
};
int main(){
	base *p=new derived();
	delete p;
}
