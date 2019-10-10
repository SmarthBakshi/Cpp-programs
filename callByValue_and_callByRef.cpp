//call by value&call by  reference
#include<iostream>
using namespace std;
int value(int a, int b){
	int t;
	a=t;t=b;b=a;
	
	cout<<"\nValue inside call by value function :\n a="<<a" b="<<b;	
}
int ref(int *a, int *b){
	int t;
	*a=t;t=*b;*b=*a;
	cout<<"\nValue inside call by reference function : \n a="a<<" b="<<b;
}
int  main(){
	cout<<"Enter values of a and b :";
	int a,b;
	cin>>a>>b;
	cout<<"\nYou entered a="<<a<<" and b="<<b;
	
	value(a,b);
	cout<<"\nValue of a and b after call by value function : \n a="<<a<<" b="<<b;
	ref(&a,&b);
	cout<<"\nValue of a nad b after call by Reference function :\n a="<<a<<" b="<<b;
	return 0;	
}
