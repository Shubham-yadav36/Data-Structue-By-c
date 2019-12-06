#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();

    display();
    printf("\n");
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}
void enqueue()
{
    int data;
    printf("Enter any number : ");
    scanf("%d",&data);

    if(rear==N-1){
        printf("Queue is FUll: ");
    }
    else if(rear==-1 && front==-1){
        rear=front=0;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
void display(){
    if(rear==-1 && front==-1){
        printf("Queue is Empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d\n",queue[i]);
        }

    }
}
void dequeue(){
    if(rear==-1 && front==-1){
        printf("Queue is Empty");
    }
    else if(rear==front){
        printf("%d",queue[front]);
        rear=front=-1;
    }
    else{
        printf("%d\n", queue[front]);
        front++;
    }
}
