//call by value&call by  reference
#include<iostream>
using namespace std;
int value(int a, int b){
	int t;
	a=t;t=b;b=a;
	
	cout<<a<<endl<<b;	
}
int ref(int *a, int *b){
	int t;
	*a=t;t=*b;*b=*a;
	cout<<a<<endl<<b;
}
int  main(){
	cout<<"check by value and reference";
	int a,b;
	cin>>a>>b;
	cout<<a<<b;
	value(a,b);
	cout<<a<<b;
	ref(&a,&b);
	cout<<a<<b;
	return 0;

	
}
