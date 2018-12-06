#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	try{
		switch(x){
			case 1:throw 'a';break;
			case 2:throw x;break;
			case 3:throw double(x);break;
			default: cout<<"Enter the correct number";
		}
	}
	
	catch(int i){
		cout<<"int exception caught";
	}
	catch(double a){
		cout<<"double exception caught";
	}
	catch(char c){
		cout<<"char exception caught";
	}
	
	catch(...){
	 	cout<<"excetio caught";
	 }	
}
