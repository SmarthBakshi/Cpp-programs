#include<iostream>
using namespace std;
class one{
	int x,y;
	public:
		void get(int a, int b){
			x=a;y=b;
		}
		void disp(){
			cout<<x<<"+j"<<y;
			
		}
		friend one operator+(one q,one w){
			
			return((a.q+b.q),(a.w+b.w));
		}
};
int main(){
	one c1,c2,c3;
	c1.get(2,3);
	c2.get(4,5);
	c3=c1+c2;
	c1.disp();
	c2.disp();
	c3.disp();
	return 0;
}
