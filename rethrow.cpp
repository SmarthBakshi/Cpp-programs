#include<iostream>
using namespace std;
int divide(double x, double y){
	try{
		if(y==0)
		throw y;
		else 
		cout<<x/y;
	}
	catch(double ){
		throw;
	}
}
int main(){
    try{
	divide(10,20);
	divide(21,0);}
	catch(double ){
		cout<<"exception caught";
	}
}
