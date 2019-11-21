#include<stdio.h>
#define cap 5
void main(){
	int element,ch,top=0,stach[cap];
	printf("Enter the element: ");
	scanf("%d",&element)
	printf("1 for push , 2 for pop, 3 for pick,4 for quit);
	scanf("%d",&ch)
	switch(ch){
		case 1: push(element);
			break;
		case 2:pop(2,element);
			break;
		case 3:pick();
			break;
		default:printf("Invalid entry");
	}
	
}
void push(int element){
	if(cap=<5){
		stack[top]=element;
		top++;		
	}
	else{
		printf("Stack is full");
	}
}
void pop(){
	if(top==0){
		printf("Stack is empty ");
	}
	else{
		top--;
		printf("%d",stack[top]);
	}
}
void pick(int pos,int ele){
	if(top==5){
		printf("Stack is full");
	}
	else{
		for(i=0;i<top;i++)
			printf("%d\n",stack[i]);
	}
}