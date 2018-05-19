#include<stdio.h>
#include<conio.h>

void main()
{
int v1,v2;
//clrscr();
printf("\n Enter v1 value: ");
scanf("%d",&v1);
printf("\n Enter v2 value: ");
fflush(stdin);
scanf("%d",&v2);
printf("\n v1+v2=%d ",v1+v2);
getch();
}