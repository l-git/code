#include <iostream>

using namespace std;
int main(){

union w{
int a;
char b;
} c;

c.a=1;
cout<<(c.b==1)<<endl;


return 0;
}
