#define N 5
int queue[N];
int front=-1;
int rear=-1;
void dequeue(){
    if(front=-1 && rear=-1){
        printf("Queue is Empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("%d",queue[front]);
        front++;
    }
}
void enqueue(int data){
    if(rear==N-1){
        printf("Queue is Full");
    }
    else if(front=-1 && rear=-1){
        front=rear=0;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
void display(){
    if(front=-1 && rear=-1)
        printf("Queue is Empty");
    else{
        for(int i=0;i<rear+1;i++){
            printf("Queeu[i] = %d\n",i,queue[i]);
        }
    }
}
