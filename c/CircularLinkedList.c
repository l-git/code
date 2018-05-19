#include <stdio.h>
#include <stdlib.h>

struct Node {
int key;
struct Node *next;

};


void printList(struct Node *start){
	struct Node *cursor=start;
	while(cursor){
		printf("%d",cursor->key);
		cursor=cursor->next;
	}

}

struct Node* createList(){
int i=0;
struct Node *root,*start;
int key;
root=NULL;
printf("enter key:0 end\n");
while(1){
printf("enter:\n");
scanf("%d",&key);
if(key==0){
start->next=root;
return root;
}
struct Node *tmp=(struct Node *)malloc(sizeof(struct Node));
tmp->key=key;
tmp->next=root;
root=tmp;
if(i==0){
	start=root;
	i++;
}
}

}


int main(int argc,char **argv){

struct Node *start;
start=createList();
printList(start);

return 0;
}