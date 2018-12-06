#include<iostream>
using namespace std;
class one{
	public: one(){
		cout<<"1";
	}
	~one(){
		cout<<"-1";
	}
	
};
class two:public one{
	public: two(){
		cout<<"2";
	}
	~two(){
		cout<<"-2";
	}
	
};
int main(){
	two t;
}
