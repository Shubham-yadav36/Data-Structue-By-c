#include<stdio.h>
void main(){
    int A[5];
    int i,j,n=5;
    printf("enter 10 element : ");
    for(i=0;i<n-1;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++){
            int flag=0;
        for(j=0;j<n-1-i;j++){
            int temp;
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag=1;
            }
        }
        if(flag==0)
            break;

    }
    printf("Sorted Array iS :\n");
    for(i=0;i<n-1;i++){
        printf("%d\n",A[i]);

    }

}
