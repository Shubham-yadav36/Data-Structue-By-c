#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* create();
void main(){

	struct node *root;
	root = create();
	preorder(root);
	getch();
}
struct node{
	int data;
	struct node *left,*right;
};
struct node* create(){
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter the value for tree and -1 for back just one step and 1 for exit: ");
	int x;
	scanf("%d",&x);
	if(x==-1){
		return 0;
	}
	temp->data=x;
	printf("enter the value for the left node %d : ",x);
	scanf("%d",&x);
	temp->left=create();
	printf("enter the value for the right node %d : ",x);
	scanf("%d",&x);
	temp->right=create();
}
void preorder(struct node* root){
    if(root==0){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->left);
}
void postorder(struct node* root){
    if(root==0){return;}
    preorder(root->left);
    printf("%d ",root->data);
    preorder("%d",root->right);
}
void inorder(struct node* root){
    inorder(root->left);
    inorder(root->right);
    printf("%d",root->data);
}
