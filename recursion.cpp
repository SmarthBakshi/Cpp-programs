//RECURSION
int fact(int n){
	if(n==0)
	return 1;
	else 
	return (n*fact(n-1));
	}
int main(){int a;
	cout<<"enter the number to find the palindrome";
	cin>>a;
	fact(a);
	return 0;
}
