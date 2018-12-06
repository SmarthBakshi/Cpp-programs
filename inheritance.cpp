#include<iostream>
using namespace std;

//SINGLE INHERITANCE

/*class one{
	public: void greet(){cout<<"Hello!";
	}
};
class two:public one{
	public:void wish(){
		cout<<"mrng!!";
	}
};
int main(){
 	two t;
 	t.greet();
 	t.wish();
}

//heirarchical INHERITANCE

class one{
	int x,y;
	public:
		void get(int a, int b){
			x=a;y=b;
		}
};
class two:public one{
	public:
		void add(){
			cout<<x+y;
		}
};
class three:public one{
	public :
		void mul(){
			cout<<x*y;
		}
};
int main(){
	two t;
	t.get(2,3);
	t.add();
	three e;
	e.get(4,5);
	e.mul();
}

//MULTI-LEVEL INHERITANCE

class one{
	public:
		void greet(){
			cout<<"WELCOME!!!\n";
		}
};
class two:public one{
	public :int x,y;
	void get(int a , int b){
		x=a;y=b;
	}
};
class three:public two{
	public:void sub(){
		cout<<"Subtraction of no.s is : "<<x-y;
	}
};
int main(){
	three t;
	t.greet();
	t.get(2,3);
	t.sub();
}*/

//MULTIPLE INHERITANCE

class one{
	public:int a;
	void geta(){
		cin>>a;
	}
};
class two{
	public :int b;
	void getb(){
		cin>>b;
	}
};
class three:public one, public two{
	public:
		void sum(){
			cout<<a+b;
		}
		
};
int main(){
	three t;
	t.geta();
	t.getb();
	t.sum();
}
