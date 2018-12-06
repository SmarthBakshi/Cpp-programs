//INLINE FUNCTION
class one{
	public: void good();
	void mrng();
};
inline void one::good(){
	cout<<"Good";
}
inline void one::mrng(){
	cout<<"Morning";
}
int main(){
	one a;
	a.good();
	a.mrng();
	return 0;
}
