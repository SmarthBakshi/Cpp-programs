//FUNCTION OVERLOADING
class one{
	public:void disp(){
		cout<<"hello";
	}
	void disp(int a){
		cout<<"hello "<<a;
	}
	void disp(char b){
		cout<<"hello "<<b;
	}
	void disp(float c){
		cout<<"hello "<<c;
	}
};
int main(){
	one a;
	a.disp();
	a.disp("shivam");
	a.disp(2.5);
	a.disp(2);
	return 0;
}
