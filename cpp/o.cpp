#include <iostream>


using namespace std;


class Person{
	
	private:
		string name;
		
		string password;
		
		
	
	
	public:
	
	
	Person(){
		
		cout<<"constructor"<<endl;
		
	}
	
	~ Person(){
		cout<<"destructor"<<endl;
	}
	
	string getName(){
		
		return name;
	}
	
	void setName(string n){
		name=n;
		
	}
	
	
	
};



class Man:public Person{
	
	private:
	
		string gender;
		
	public:
	
		string getGender(){
			
			return gender;
		}
		
		void setGender(string g){
			gender=g;
			
		}
	
	
	
};



int main(){


cout<<"hello cpp"<<endl;



Man m;

m.setName("ok");



cout<<m.getName()<<endl;






/**
Person p;

p.setName("name112");


cout<<p.getName()<<endl;
cout<<"======================="<<endl;


Person p1=p;

cout<<p1.getName()<<endl;

cout<<&p1<<endl;


Person *p2 =new Person();
cout<<"======================="<<endl;
cout<<p2->getName()<<endl;

delete p2;


string s1;


cout<<"input your name:"<<endl;

cin>>s1;

cout<<"you input :"<<s1<<endl;


*/








return 0;
}