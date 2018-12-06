#include<iostream>
using namespace std;
class one{
	int x;
	public:
		void get(int a){
			x=a;
		}
		void disp(){
			cout<<x;
		}
/*		one operator+(one a){
			one temp;
			temp.x=x+a.x;
		return(temp);
		}*/
		friend one operator+(one &a, one &b){
			return(a.x+b.x)
		}
};
int main(){
	one a1,a2,a3;
	a1.get(10);
	a2.get(20);
	a3=a1+a2;
	a1.disp();
	a2.disp();
	a3.disp();
	return 0;
}
