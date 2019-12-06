struct node node{
	int data;
	struct node *next;
}
struct node *front=0;
struct node *rear=0;
void add(int data){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	struct node->data=data;
	struct node->next=0;
	if(front=0 && rear=0){
		front  = rear = temp;
	}
	else{
		rear->next=temp;
		rear = temp;
	}

}
void print(){
	struct node *temp;
	if(front==0 && rear==0){
		printf("queue is empty")
	}
	else{
		temp = front;
		while(temp!=0){
			printf("%d\n",temp->data);
			temp = temp->next;
		}
	}
}
void dequeue(){
	struct node *temp;
	if(fron==0 && rear==0){
		printf("queue is full");
	}
	else{
		printf("%d\n",front->data);
		front = front->next;
		free(front);
	}
}
void main(){
	int ele =10;

}
