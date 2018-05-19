#include <stdio.h>
#include <stdlib.h>

int main(){

int a=0;

int i=0;
for(i=0;i<100;i++){
printf("i=%d\n",i);
a=++a;
}

printf("%d\n",a);

return 0;
}