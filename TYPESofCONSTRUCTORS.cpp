#include<iostream>
using namespace std;
class one{
	public: one(){
		cout<<"WELCOME";
	}
	one(int a, int b){
		cout<<"Sum of two numbers is : ";
		cout<<a+b;
	}
};
int main(){
	cout<<"Running DEFAULT constructor";
	one a;
	cout<<"Running PARAMETRIZED constructor";
    one a1(23,45);
    cout<<"Running COPY constructor";
    one a2(a1);
    return 0;
}
