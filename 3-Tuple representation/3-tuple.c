#include<stdio.h>
#include<conio.h>
void main(){
    int smatrix[7][7],col,row,i,j,ele=0;
    printf("Enter the row and column of matrix(square matrix) : ");
    scanf("%d%d",&row,&col);
    smatrix[row][col];
    printf("Enter the element for the matrix : ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d",smatrix[i][j]);
    }
    for(i=0;i<row;i++){
        if(smatrix[i][j]!=0){
            ele+=1;
        }
    }
    printf("the converted into sparsh matrix is : \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(smatrix[i][j]!=0)
                printf("%\t%d\t%d\n",row,col,ele);
                printf("%d\t%d\t%d\n",(i+1),(j+1),smatrix[i][j]);
        }
    }
    getch();
}
