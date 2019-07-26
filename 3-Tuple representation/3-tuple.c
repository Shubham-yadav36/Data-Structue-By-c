#include<stdio.h>
void main()
{
    int i,j,col,row,count=0;
    int a[7][6];

    printf("enter the  Numbr of Row and Col matrix less then 7*7 : ");
    scanf("%d%d",&row,&col);
    printf("enter the element for the matrix : ");
    for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                scanf("%d",&a[i][j]);
            }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            if(a[i][j]!=0)
                count+=1;
        }
    }
    printf("the 3-Tuple matrix result is :\n");
    printf("%d  %d  %d\n",row,col,count);

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            if(a[i][j]!=0)
                printf("%d  %d  %d\n",(i+1),(j+1),a[i][j]);
        }
    }
    getch();
}

