#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <cmath>
#include <conio.h>
#include <string>
using namespace std;



class C{
	private:
	
		static int d;
	
	public:
	
		C(){
			d++;
		}
	
		void setD(int i){
			d=i;
		}
		
		int getD(){
			return d;
		}
		
		
		~C(){
			cout<<"destructor"<<endl;
			
		}
	
};

int C::d=0;









void f(char *);

void copystr(char *s1,char *s2){
	
	while(*s1){
		
		*s2++=*s1++;
		
	}
	
	*s2='\0';
	
	
}



struct link{
	
	int data;
	struct link *next;
	
};


class linklist{
	
	private:
		link *l;
		
		public:
		linklist(){
			
			l=NULL;
		}
		
		void add(int d);
		
		void display();
	
	
};


void linklist::add(int d){
	
	link *p=new link;
	p->data=d;
	
	p->next=l;
	l=p;
	
	
}


void linklist::display(){
	
	link *p;
	p=l;
	
	while(p){
		
		cout<<p->data<<endl;
		p=p->next;
	}
	
	
}


class P{
	
	public:
	 virtual void show(){
		 
		 cout<<"p"<<endl;
	 }
	 
	 
	 virtual ~P(){
		 
		 cout<<"destructor p"<<endl;
		 
	 }
	 
	
};

class C1:public P{
	
	public:
	void show(){
		
		cout<<"c1"<<endl;
	}
	~C1(){
		
		 cout<<"destructor c1"<<endl;
	}
};

class C2:public P{
	
	public:
	void show(){
		
		cout<<"c2"<<endl;
	}
	~C2(){
		
		 cout<<"destructor c2"<<endl;
	}
};


class S{
	
	private:
		int id;
		
		static int total;
	
	public:
	
	
		S(){
			
			total++;
			
			id=total;
			
		}
		
		
		~S(){
			
			total--;
			
			cout<<"destroy id "<<id<<endl;;
			
			
		}
		
		
		
		void show(){
			
			cout<<this<<endl;
			
		}
		
		
	
	
};

int S::total=0;


int main(){


S s1,s2;

s1.show();

S s3;

s3.show();



/*
c1.show();
c2.show();
*/

P *p=new C1;

cout<<"------------------------------------"<<endl;
cout<<typeid(*p).name()<<endl;

delete p;






/**
linklist l;

l.add(1);
l.add(2);

l.add(3);

l.display();

*/






return 0;
}

void f(char *s){
	
	while(*s!='\0'){
		cout<<*s;
		s++;
	}
	
}