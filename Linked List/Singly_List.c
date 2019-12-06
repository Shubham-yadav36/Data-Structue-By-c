struct node{
    int data;
    struct node *next;
};
struct node *head;
head=0;
void intsert(int x){
    struct node *temp;
    temp->data = x;
    temp->next= 0;
    if(head==0){
        head=temp;
    }
    else{
        struct node *p;
        p=head;
        while(p->next!=0){
            p=p->next;
        }
        p->next=temp;
    }

}
void delete(){

}
