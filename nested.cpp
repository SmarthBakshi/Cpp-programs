#include<iostream>
using namespace std;
//NESTED FUCNTIONS
class one{
	public: int first(){
		cout<<"hello";}
	int second(){first();
		cout<<" shivam";
	}
	
};
int main(){
	one a;
	a.second();
}
