#include <stdlib.h>
#include <stdio.h>
int main(int argc,char **argv){

char *e;

e=getenv("PATH");

if(e!=NULL){
	printf("path is %s\n",e);
}


return 0;
}