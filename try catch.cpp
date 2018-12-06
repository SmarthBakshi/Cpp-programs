#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter two no.s";
	cin>>x>>y;
	try{
		if(y==0)
		throw y;
		else 
		return(x/y);
	}
	catch(int a){
		cout<<"Exception caught";
	}
return 0;
}

