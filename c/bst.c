#include <stdio.h>
#include <stdlib.h>

struct Node {
int key;
struct Node *left;
struct Node *right;

};


void preOrder(struct Node *root){
if(root){

printf("%d\n",root->key);
preOrder(root->left);
preOrder(root->right);

}


}

void inOrder(struct Node *root){

	if(root){
		inOrder(root->left);
		printf("%d\n",root->key);
		inOrder(root->right);
	}
}

void postOrder(struct Node *root){
	
	if(root){
		postOrder(root->left);
		postOrder(root->right);
		printf("%d\n");
		
	}
	
}


void create(struct Node **root,int key){
	struct Node *tmp;
	if((*root)==NULL){
		tmp=(struct Node *)malloc(sizeof(struct Node));
		tmp->left=tmp->right=NULL;
		tmp->key=key;
		*root=tmp;
		return;
		
	}
	
	if(key<(*root)->key){
		printf("create right\n");
		create(&(*root)->left,key);
		
	}else{
		printf("create left\n");
		create(&(*root)->right,key);
	}
	
	
}









int main(int argc,char **argv){

struct Node *root=NULL;
printf("scanf -1 to end\n");
int key;
while(1){
	printf("1\n");
	scanf("%d",&key);
	if(key==-1){
		printf("end\n");
		break;
	}
	create(&root,key);
}

printf("traverse tree:\n");
inOrder(root);







return 0;
}