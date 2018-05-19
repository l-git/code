#include <stdlib.h>
#include <stdio.h>
int main(int argsc,char *argv[]){

char *weekname[]={"sunday","monday","tuesday","wednesday","thurthday","friday","saturday"};
char **p;
int week;

p=weekname;
printf("input week:\n");
scanf("%d",&week);
if(week>=0&&week<=6){
printf("%s",*(p+week));
}else{
printf("wrong");
}

return 1;
}