#include<stdio.h>
#include<conio.h>
void main(){
    void mergeSort(int,int,int);
    void merge(int,int,int,int);
    int A[10]={10,3,44,33,22,54,54,76,90,2};
    int B[10];
    mergeSort(A,0,9);

}
void mergeSort(A,lb,ub)
{
    if(lb<ub)
    {
        int mid= (lb+ub)/2;
        mergeSort(A,lb,mid);
        mergeSort(A,mid+1,ub);
        merge(A,lb,mid,ub);
    }
}
void merge(int A,int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=ub;
    while(i<=lb && j<=ub)
    {
        if(A[i]<=A[j])
        {
            B[k] = A[i];
            j++
        }
        else
        {
            B[k]=A[j];
            j++
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            B[k]=A[j];j++;k++;
        }
    }
    else{
        while(i<=mid){
            B[k]=A[i];i++;k++;
        }
    }
    for(k=lb;k<ub;k++){
        A[k]=B[k];
    }
}
