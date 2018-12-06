//ARRAY OF OBJECTS
class student{
	public:int rollno;
	char name[20],branch[5];
	void input(){
		cout<<"Enter name";cin.get(name,20);
		cout<<"Enter branch";cin.get(branch,5);
		cout<<"enter roll no";cin>>rollno;
	}
	void output(){
		cout<<"Your name is :"<<name;
		cout<<"Your branch is :"<<branch;
		cout<<"Your roll no is :"<<rollno;
	}
};
int main(){
	int n;
	cout<<"how many students u wnt to add?";cin>>n;
	student *s=new student[n];
	for(int i=0;i<n;i++){
		s[i].input();
		s[i].output();
	}
	delete[s];
	
	return 0;
	
}
