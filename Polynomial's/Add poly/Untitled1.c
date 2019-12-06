#include<stdio.h>
#include<conio.h>
void main(){
    int Poly1[6][2],poly2[6][2],term1,term2,match,proceed;
    printf("enter the term in the first and second polynomials(less then 6) : ");
    scanf("%d%d",&term1,&term2);
    printf("enter the cofiecient and exponant of the poly one : ");
    for(int i=0;i<term1;i++){
        scanf("%d%d",&Poly1[i][0],&Poly1[i][1]);
    }
    printf("enter the cofiecient and exponant of the poly two : ");
    for(int i=0;i<term2;i++){
        scanf("%d%d",&poly2[i][0],&poly2[i][1]);
    }
    printf("The resultant polynimials is : \n");
    for(int i=0;i<term1;i++)
    {
        match=0;
        if(Poly1[i][1]==poly2[i][1]){
            printf("%d  %d\n",Poly1[i][0]+poly2[i][0],poly2[i][1]);
            match=1;
        }
    }
    for(int i=0;i<term1;i++){
            proceed=1;
                for(int j=0;j<term2;i++){
                        proceed=0;
                        if(proceed==1){
                            if(Poly1[i][0]!=poly2[i][0]){
                                proceed=1;
                        }
                            else
                                proceed=0;
                    }
            if(proceed==1)
                    printf("%d  %d  %d",Poly1[i][0],Poly1[i][1]);
                }
    }
    for(int i=0;i<term1;i++){
            proceed=1;
        for(int j=0;j<term2;i++){
            if(proceed=1){
                if(poly2[i][0]!=Poly1[i][0])
                    proceed=1;
                else
                    proceed=0;
            if{
                printf("%d %d %d\n" ,Poly1[i][0],poly2[i][0]);
            }
        }
    }
    getch();
}
