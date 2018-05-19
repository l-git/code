#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class CUser{

public:
	char u[20];
	char p[20];
	
	bool login(){
	
		if(strcmp(u,"u")==0&&strcmp(p,"p")==0){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	
	cout<<"hello"<<endl;
	return true;
	}
	

};


int main(){

CUser c;

	cout<<c.login()<<endl;
	
	



return 0;
}
