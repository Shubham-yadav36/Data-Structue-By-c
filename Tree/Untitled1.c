#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    struct node *root;
    root=0;
    root=create();
    preorder(root);
    postorder(root);
    inorder(root);
}
struct node
{
    int data;
    struct node *left,*right;
};
struct node* create(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the element for node(-1 for no node) :");
    scanf("%d",&data);
    if(data==-1){
        return 0;
    }
    temp->data=data;
    printf("enter the node value for left child : ");
    scanf("%d",&data);
    temp->left=create();
    printf("enter the node value for the right child : ");
    scanf("%d",&data);
    temp->right=create();
    return temp;
};
void preorder(struct node *root){
    if(root==0){return 0;}
    printf("%d\n",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root){
    if(root==0){return 0;}
    postorder(root->left);
    postorder(root->right);
    printf("%d\n",root->data);
}
void inorder(struct node *root){
    if(root==0){return 0;}
    inorder(root->left);
    printf("%d\n",root->data);
    inorder(root->right);

}
