#include<iostream>
using namespace std;
class one{
	public: one(){
		cout<<"WELCOME\n";
	}
	one(int a, int b){
		cout<<"Sum of two numbers is : ";
		cout<<a+b<<"\n";
	}
	one(double a, double b){
		cout<<"Sum of two numbers is : ";
		cout<<a+b<<"\n";
	}
};
int main(){
	cout<<"Running DEFAULT constructor\n";
	one a;
	cout<<"Running PARAMETRIZED constructor\n";
    one a1(23,45);
    one a2(2.3,4.5);

    return 0;
}
