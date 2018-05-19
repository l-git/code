#include <iostream>
#include <string>


using namespace std;



int main(){
	
	
	char *p;
	
	p=(char *)0x88778877;
	
	cout<<*p<<endl;
	
	
	cout<<"hello world"<<endl;

	string s("fhlfef");
	
	cout<<s<<endl;
	
	cout<<"input string"<<endl;
	cin>>s;
	
	cout<<"you input"<<endl;
	cout<<s<<endl;
	
	
   return 0;
}