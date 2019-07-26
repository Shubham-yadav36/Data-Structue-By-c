#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int detail;
    struct node *p;
};
void remove_item(struct node **s){
    while(*s!=NULL){
        pop(s);
    }
}
int pop(struct node **s){
    int item;
        struct node *r;
    if(*s==NULL){
        printf("\nThe top of the stack is NULL\n");
        return;
    }
    else{
        item=(*s)->p;
        r=*s;
        *s=r->p;
        free(r);
        return(item);
    }
}

struct node* createNode(){
    struct node *r;
    r = (struct node *)malloc(sizeof(struct node));
    return(r);
}
void push(struct node **s,int item){
    struct node *n;
    if(n!=NULL){
        n=createNode();
        n->info=item;
        n->p=*s;
        *s=n;
    }
}
main(){
    struct node *stack;
    push(&stack,20);
    push(&stack,40);
    push(&stack,30);
    push(&stack,4);
    push(&stack,2);

    printf(" %d ",pop(&stack));



}
