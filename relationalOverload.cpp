class one
{
	int x;
	public:
		void get(int a)
		{
			x=a;
		}
		friend one operator<(one &r1,one &r2)
		{
		     if(r1.x<r2.x)
		     return r1;
		     else
		     return r2;
		}
		void disp(){
			
			cout<<x<<" is lesser";
		}
};
int main()
{
	one o1;
	o1.get(10);
	one o2;
	o2.get(20);
	if(o1<o2)
	o1.disp();
	else o2.disp();
}
