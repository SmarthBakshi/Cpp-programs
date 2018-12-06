#include<iostream>
using namespace std;
class one{
	public:int x=5;
	void disp(){
		cout<<x;
	}
};
class two:public one{
	public: int y=10;
	void disp(){
		cout<<y;
	}
};
int main(){
	one *o;two t;
	o=&t;
	o->disp();
}
