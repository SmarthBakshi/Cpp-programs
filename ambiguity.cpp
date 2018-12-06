#include<iostream>
using namespace std;
class one{
	public: void disp(){
		cout<<"In base class";
	}
};
class two:public one{
	public : void disp(){
		cout<<"In derived class";
	}
};
int main(){
	two t;
	t.disp();
	t.one::disp();
}
