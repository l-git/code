#include <iostream>
#include <cstring>
#include <string>
#include "C1.h"
#include <fstream>
using namespace std;

template <class T>
void f(T t){
	
	cout<<" ia= f"<<t<<endl;
	
	
}


namespace N1{
	
	void f(){
		cout<<"N1"<<endl;
	}
	
}


namespace N2{
	
	void f(){
		cout<<"N2"<<endl;
	}
	
}





class C2{
	
	public:
		C2(){
			
			cout<<"c2 constructor"<<endl;
			
		}
	
		~C2(){
			
			cout<<"c2 destructor"<<endl;
			
		}
	
};




int main(){
	
	
	int i1=1;
	int i2=0;
	try{
	int i3=i1/i2;
	
	}catch(const char *e){
		cout<<e;
	}catch(...)
	{
		
		cout<<"exception"<<endl;
	}	
	
	C11 c11;
	//c11.m1();
	
	/**
	C2 c2;
	
	
	N1::f();
	
	N2::f();
	
	
	
	
	
	
	
	
	
	
	
	
	int i1;
	i1=5;
	void (*fp)(int);
	
	fp=f;
	
	(*fp)(i1);
	
	
	char c1;
	c1='a';
	
	
	void (*f2)(char);
	
	f2=f;
	
	(*f2)(c1);
	
	
	
	
	int b;
	const int *p=&b;
	int * const p1=&b;
	int a;
	
	p=&a;
	
	//p1=&a
	
	/**
	char aa[50];
	
	cin.getline(aa,50);
	
	
	cout<<aa<<endl;
	*/
	
	/**
	ofstream o1;
	o1.open("a.txt");
	
	o1<<"new file \n this is line 2\n line3"<<endl;
	
	
	o1.close();
	
	
	
	
	ifstream i1;
	
	i1.open("a.txt");
	
	char buffer[20];
	
	
	i1>>buffer;
	
	
	while(i1.good()){
		
		cout<<buffer<<" " ;
		i1>>buffer;
	}
	
	
	
	i1.close();
	
	if(i1.eof()){
		cout<<"ok"<<endl;
	}else{
		cout<<"fail"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/**
	cout<<"中文"<<endl;
	
	
	wchar_t c;
	
	//c='国';
	
	cout<<sizeof(c)<<endl;
	
	cout<<static_cast<char>(c)<<endl;
	
	
	char a[]="a中俄";
	
	
	cout<<a<<endl<<strlen(a)<<endl; 
	
	string s1;
	string s2;
	s1="abc";
	s2=s1;
	cout<<s2<<endl;
	
	s2="def";
	
	cout<<"s1:"<<s1<<endl;
	
	union u{
		
		int i;
		char c;
		
	};
	
	u u1;
	
	u1.i=1;
	
	cout<<u1.i<<endl;
	
	
	int *p =new int;
	
	delete p;
	delete p;
	
	int *pa=new int[10];
	
	delete[] pa;
	
	
	int arr[3];
	
	
	cout<<arr<<":"<<arr+1<<endl;
	cout<<&arr<<":"<<&arr+1<<endl;
	
	
	
	int size;
	cout<<"how many size of int in heap"<<endl;
	
	cin>>size;
	
	int *p1=new int[size];
	
	
	delete[] p1;
	
	
	
	
	
	
	
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}