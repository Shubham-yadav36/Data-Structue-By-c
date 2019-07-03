#include<stdio.h>
void main()
{
    int i,j,col,row;
    int a[5][5];

    printf("enter the  Numbr of Row and Col matrix less then 5*5 : ");
    scanf("%d,%d",&row,&col);
    printf("enter the element for the matrix : ");
    for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                scanf("%d",&a[i][j]);
            }
    }
    printf("the 3-Tuple matrix result is :\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(a[i][j]!=0)
                printf("%d\t%d\t%d",(i+1),(j+1),a[i][j]);
        }
        printf("\n");
    }
    getch();
}

