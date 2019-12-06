#include<stdio.h>
#include<conio.h>
void main(){
 int Sparsh[3][3],i,j;
 int row=3;
 printf("Enter 9 element : ");
 for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(Sparsh[i][j]!=0){
                scanf("%d",&Sparsh[i][j]);
            }
        }
 }

 for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(Sparsh[i][j]!=0){
                printf("%d\t%d\t%d \n",i,j,Sparsh[i][j]);
                count++;
            }

        }
    }
    printf("%d\t%d\t%d",row,row,count);

}
