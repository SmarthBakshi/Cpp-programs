#include<iostream>
using namespace std;
class A{
	public: void disp1(){
		cout<<"In A";
	}
};
class B:virtual public A{
	public: void disp2(){
		cout<<"In B";
	}
};
class C:public virtual A{
	public: void disp3(){
		cout<<"In C";
	}
};
class D:public B, public C{
	public: void disp4(){
		cout<<"In D";
	}
};
 int main(){
 	D d1;
d1.disp1();d1.disp2();d1.disp3();d1.disp4();
 }
