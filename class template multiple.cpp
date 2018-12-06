#include<iostream>
using namespace std;
template<class t1,class t2>
class one{
	t1 x; t2 y;
	public:
	one(t1 a,t2 b){
		x=a;y=b;
	}
	void disp(){
		if(x>y)
		cout<<x;
		else 
		cout<<y;
	}
};
int main(){
	one<int,int > o1(6,5);
	o1.disp();
	one<char, char> o3('a','c');
	o3.disp();
	one<double, double> o2(34.52,34.521);
	o2.disp();
}
