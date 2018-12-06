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
		void operator-(){
			x=-x;
		}
		friend void operator-(one &s){
                  s.x=-s.x;			
		}
};
int main(){
	one a;
	a.get(2);
	a.disp();
	-a;
	a.disp();
	return 0;
}
