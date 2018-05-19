#include <stdio.h>
#include <stdlib.h>

struct Node {
	
	int data;
	struct Node *next;
	
};

void print(struct Node *head){
	
	struct Node *tmp;
	tmp=head;
	if(tmp!=NULL){
		while(tmp!=NULL){
			printf("%d\n",tmp->data);
			tmp=tmp->next;
		}
	}	
}


struct Node *reverseList(struct Node *head){
	
	struct Node *pre;
	
	struct Node *curr;
	struct Node *next;
	
	curr=head;
	
	pre=NULL;
	while(curr!=NULL){
		
		next=curr->next;
		curr->next=pre;
		pre=curr;
		curr=next;
		
		
	}
	
	return pre;
	
	
	
	
	
	
	
	
}



void createList(){
	
	struct Node *head=NULL;
	
	struct Node *curr;
	
	int data;
	
	printf("input:\n");
	scanf("%d",&data);
	
	while(data!=0){
		
				
		struct Node *tmp=(struct Node *)malloc(sizeof(struct Node));
		
		tmp->data=data;
		tmp->next=NULL;
		
		if(head==NULL){
			head=tmp;
			curr=tmp;
		}else{
			curr->next=tmp;
			curr=tmp;
			
		}
		
		printf("input:\n");
		scanf("%d",&data);

	
		
	}
	
	
	print(head);
	
	printf("reversing\n");
	
	head=reverseList(head);
	
	print(head);
	
	
	
	
}




int main(){



createList();








return 0;
}