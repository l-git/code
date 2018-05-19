#include <iostream>

using namespace std;

class B{

public:
	virtual void f1(){
		cout<<"f1"<<endl;
	}

	virtual void f2(){
		cout<<"f2"<<endl;
	}
};


typedef void (*Fun)();

int main(){

B b;

Fun f;

f=(Fun)*((int *)(*(int *)(&b))+0);
f();

f=(Fun)*((int *)(*(int *)(&b))+1);
f();


return 0;
}

