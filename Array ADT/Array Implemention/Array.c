#include<stdio.h>
#include<conio.h>
void insert(arr *,int,int);
void create(arr *);
void print(arr *);

typedef struct{
      int data[5];
      int count;
}arr;

void insert(arr *start,int pos,int data){
      int temp = start->count;
      while(temp>=pos){
            start->data[temp+1]=start->data[temp];
            temp--;
            }
            start->data[pos]=data;
            start->count++;
}
void create(arr *start)
{
      int i=0,test=0;
      while(test)
      {
            printf("enter the value value %d : (zero to come out)",i);
            scanf("%d",&start->data[i]);

            if(start->data[i]==0){
                  test=0;
            }
            else{
                  i++;
            }

      }
      start->count=i;
}
void print(arr *start)
{
      int i;
      for(i=0;i<start->count;i++)
      {
            printf("\n position : %d and value : %d",i,start->data[i]);
      }
}


void main()
{
      int pos,data;
      arr l;
      create(&l);
      printf("/n Entered list as follows:");
      fflush(stdin);
      print(&l);
      fflush(stdin);
      printf("/n input the position where you want to add a new data item : ");
      scanf("%d",&pos);
      fflush(stdin);
      printf("/n input the value for the position: ");
      scanf("%d",&data);
      insert(&l,pos,data);
      print(&l);
      getch();
}
