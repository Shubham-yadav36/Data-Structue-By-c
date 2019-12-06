#include<stdio.h>
#include<conio.h>
#define N 5
int Stack[5];
int top=-1;
void push();
void pop();
void show();
void main(){
    push();
    push();
    push();
    show();
}
void push(){
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    if(top==N-1){
        printf("overflow can not insert");
    }
    else{
        top++;
        Stack[top]=x;
    }
}
void pop()
{
    if(top==-1){
        printf("Underflow Empty");
    }
    else{
        top--;
        printf("%d ",Stack[top]);
    }
}
void show(){
    if(top==-1){
        printf("Stack is Empty");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",Stack[i]);
        }
    }
}


