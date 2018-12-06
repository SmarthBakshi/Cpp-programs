//STATIC FUNCTION
class one{
	int code;
	static int count;
	public:
		void setcode(){
			code=++count;
		}
		void show(){
			cout<<code;
		}
		static void shc(){
			cout<<count;
		}
};
int one::count;
int main(){
	one b,c;
	b.setcode();
	c.setcode();
	one::shc();
	one d;
	d.setcode();
	d.show();
	one::shc();
}
