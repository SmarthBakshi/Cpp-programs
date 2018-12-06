#include<iostream>
using namespace std;
template<class t>
int sum(t a, t b){
	cout<<"sum of two is : "<<a+b;
}
int main(){
	sum(2,3);
	sum('a','c');
	sum(334.32,24452.76);
}
