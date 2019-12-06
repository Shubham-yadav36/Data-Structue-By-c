struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int data)
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=0;
    if(front==0 && rear==0){
        fornt=rear=temp;
        rear->next=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
        rear->next=front;
    }
}
void display(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=0;
    if(front ==0 && rear ==0){
        printf("Queue is empty ");
    }
    else{
        temp->data=rear;
        rear=temp;
    }
}
