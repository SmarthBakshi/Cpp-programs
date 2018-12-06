#include<iostream>
using namespace std;
template<class t>
class one{
	t x;
	public:one(){x=0;
	}
	one(t a){
		x=a;
	}
	void disp(){
		cout<<x;
	}
};
int main(){
	one<int> o1(6),o2;
	o1.disp();
	one<double> o3(3.3),o4;
	o3.disp();
}
