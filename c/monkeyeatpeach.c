//
// Created by Galapagos on 2016/6/18.
//
#include <stdio.h>

/*int peach(int day){
    int n;
    if(day==10)
        n=1;
    else n= 2*(peach(day+1)+1);
    return n;
}*/

/**
 * ºï×Ó³ÔÌÒµİ¹é·¨
 */

int peachRecursive(int day){
    int n;
    if(day==1){
        n=1;
    }else{
        n=2*(peachRecursive(day-1)+1);
    }
    return n;
}
/**
 * ºï×Ó³ÔÌÒµü´ú·¨
 */

int peachIterate(int day){
    int n=1;
    int i;
    for(i=1;i<day;i++){
        n=2*(n+1);
    }
    return n;
}


int main(){

    printf("hello clion!\n");
    int day;
    printf("please input day:\n");
    scanf("%d",&day);
    int n;
    n=peachRecursive(day);
    printf("recursive:%d\n",n);
    int n1;
    n1=peachIterate(day);
    printf("iterate:%d\n",n1);


    return 0;
}
