#include <stdio.h>
#include <stdlib.h>

int main(){


short s;
int i;

//printf("%d,%d",sizeof(s),sizeof(i));



s=0x4142;


FILE *fp;



fp=fopen("a.txt","wb");

if(fp==NULL){

printf("open file error\n");
}else{


fwrite(&s,sizeof(s),1,fp);




fclose(fp);

printf("write success \n");

}











return 0;
}


