struct node {
    int data;
    struct node *next;
};
struct node *top=-1;
void push(int data){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->data=top;
    top=temp;
}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==-1)
        printf("Stack is Empty");
    else{
        printf("poped item : %d\n",temp->data);
        top=temp->next;
    }
}
void display(){
    struct node *temp;
    temp=top;
    if(top==-1)
        printf("Stac is Empty");
    else{
        while(temp!=0){
            printf("%d \n",temp->data);
            temp=temp->next;
        }
    }
}
