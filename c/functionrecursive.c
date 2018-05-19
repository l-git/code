//
// Created by Galapagos on 2016/6/18.
//
#include <stdio.h>
#include <stdlib.h>

/*int peach(int day){
    int n;
    if(day==10)
        n=1;
    else n= 2*(peach(day+1)+1);
    return n;
}*/

/**
 *
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
 * 
 */

int peachIterate(int day){
    int n=1;
    int i;
    for(i=1;i<day;i++){
        n=2*(n+1);
    }
    return n;
}

/**
 * 
 */
int gcd(int a,int b){
    printf("gcd\n");

    if(b==0){
        return a;
    }else{
        return gcd(b,a/b);
    }

}
/**
 * 递归求解数组最大值
 */
int maxn(int a[],int n){
    int m;
    if(n==0){
        m=a[n];
    }else{
        m=maxn(a,n-1);
        m=a[n-1]>m?a[n]:m;
    }
    return m;
}

void reverseNum(long n){
    if(n<10){
        printf("%d\n",n);
    }else{
        printf("%d\n",n%10);
        reverseNum(n/10);
    }

}

/**
 * 递归输出n个字符c
 */
void printCharN(char c,int n){
    if(n>0){
        printf("%c",c);
        printCharN(c,n-1);
    }
}

void printTrangle(int level){
    int i;
    for(i=1;i<=level;i++){
        printCharN(' ',level-i);
        printCharN('*',2*i-1);
        printf("\n");
    }

}

int recursiveSum(int n){
    if(n==1||0){
        return 1;
    }else{
        return recursiveSum(n-1)+n;
    }
}

void move(char a,char b){
    printf("%c->%c\n",a,b);
}


void hanotowel(int n,char a,char b,char c){
    if(n==1){
        move(a,c);
    }else{
        hanotowel(n-1,a,c,b);
        move(a,c);
        hanotowel(n-1,b,a,c);
    }

}


/**
 * 杨辉三角形第r行第c列的值
 */
int yh(int r,int c){

    if(r<0||c<0){
        printf("data error");
        return -1;
    }
    if(r==0||r==c){
        return 1;
    }else{
        return yh(r-1,c)+yh(r-1,c-1);
    }

}

int main(){

    /*int n;
    printf("input n:\n");

    scanf("%d",&n);;*/
    /*int r;
    r=recursiveSum(n);
    printf("r:%d\n",r);*/
    /*hanotowel(n,'A','B','C');*/

    int r,c;
    printf("input r&c:\n");
    scanf("%d%d",&r,&c);
    printf("%d",yh(r,c));

    /*system("pause");*/
    return 0;
}
