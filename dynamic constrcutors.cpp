#include<iostream>
using namespace std;
class one{
	int *p;
	public:
		one(){
			p=new int[100];
		}
		one(int v){
			p=new int[v];
		}
		int disp(){
			return *p;
		}
};
int main(){
	one a;
	one b(30);
	cout<<a.disp();
	cout<<b.disp();
	return 0;
}
