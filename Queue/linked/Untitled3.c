struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int data){
    struct node *temp;
    temp= (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=0;
    if(front==0 && rear==0)
    {
        front=rear=temp;
    }
    else if{
        rear->next=temp;
        rear=temp;
    }
}
void display(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("Queue is empty");
    }
    else{
        temp=front;
        while(temp!=0){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(fornt==0  && rear==0){
        printf("Queue is Empty");
    }
    else{
        printf("Poped item is : %d\n",front->data);
        front=front->next;
        free(temp);
    }
}
