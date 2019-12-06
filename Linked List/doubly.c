struct node
{
    int data;
    struct node *next,*prev;
};
struct node *head=0;
void create(){
    struct node *temp,temp2;
    int data;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter any number : ");
    scanf("%d",&temp->data);
    temp->next=0;
    temp->prev=0;
    if(head==0){
        head=temp2=temp;
    }
    else{
        temp2->next=temp;
        temp->prev=temp2
        temp2=temp;
    }
}
