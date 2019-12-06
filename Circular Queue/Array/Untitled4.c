#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int data)
{
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;
    }
    else if((rear+1)%N)==front){
            printf("Queeu is Full");
    }
    else {
        rear = (rear+1)%N;
        queue[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1){
        printf("Queue is Empty")
    }
    else{
        printf("Poped item : %d\n",queue[rear]);
        rear= (rear+1)%N;
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1){
        printf("Queue is Empty")
    }
    else{
        while(i!=rear){
            printf("%d\n",queue[i]);
            i= (i+1)%N;
        }
    }
}
