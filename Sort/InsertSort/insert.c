#include<stdio.h>
void main(){
    int A[5];
    int i,j,n=5;
    printf("enter 10 element : ");
    for(i=0;i<n-1;i++){
        scanf("%d",&A[i]);
    }
    for(i=1;i<n;i++){
            int temp;
            temp = A[i];
            j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;

    }
    printf("Sorted Array iS :\n");
    for(i=0;i<n-1;i++){
        printf("%d\n",A[i]);

    }

}
