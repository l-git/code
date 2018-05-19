#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

int a[]={1,2,3};

int *p;

p=(int *)(a+1);

printf("%d\n",*p);


return 0;
}