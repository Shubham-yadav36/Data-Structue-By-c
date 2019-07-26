struct ArraADT{
    int capacity;
    int lastIndex;
    int *ptr;
};

struct arrayADT* createArray(int capacity);
struct getItem(struct ArrayADT *arr,int index);
struct setItem(struct ArrayADT* arr,int index,int value);
struct modify(struct ArrayADT* arr,int index,int newValue);
struct countItem(struct ArrayADT*);
struct removeItem(struct ArrayADT* arr,int index);
int search(struct ArraADT*,int Item);
void sort(struct ArraADT* arr);

struct arrayADT* createArray(int capacity){
      struct ArrayADT *arr;
      arr=(struct ArraADT*)malloc(sizeof(struct arrayADT));
      arr->capacity=capacity;
      arr->lastIndex=-1;
      arr->ptr=(int*)malloc(arr->capacity*sizeof(int));
      return(arr);
};
struct getItem(struct ArrayADT *arr,int index){

    if(arr->lastIndex<index || Index<0){
        printf("\nInvalid Index");
        return(-1);
    }
    else{
        return(arr->ptr[index]);
    }
};
struct setItem(struct ArrayADT* arr,int index,int value){

        if(arr->lastIndex == arr->capacity-1){  // Array is full
            printf("\nArray is Already Full(Overflow) plz enter apropiate value of index");
            return(0);
        }
        if(index<0 || index>arr->lastIndex+1){
            printf("\nInvalid Index");
            return(0);
        }
        if(index <=arr->lastIndex){
            int i;
            arr ->lastIndex = arr->lastIndex+1;
            i = arr->lastIndex;
            while(i!=index){
                arr->ptr[i] = arr->ptr[i-1];
                i--;
            }
            arr->prt[index] = value;
            return(1);
        }
        if(index==arr->lastIndex+1){

            arr->lastIndex = arr->lastIndex+1;
            arr->ptr[lastIndex] = value;
            return(1);
        }

struct modify(struct ArrayADT* arr,int index,int newValue);{
    if(intdex<0 || index>arr->lastIndex){
        printf("\nInvalid Index");
        return(0);
    }
    else{
        arr->prt[index]= newValue;
        return(1);
    }
};
struct countItem(struct ArrayADT *arr){
    return(arr->lastIndex+1);
};
struct removeItem(struct ArrayADT* arr,int index){
    if(index<0 || index>arr->lastIndex+1){
        print("\nInvalid Index");
        return(0);
    }
    if(index<arr->lastindex){
        int i;
        i = index;
        while(i<arr->lastIndex){
            arr->ptr[i]=arr->ptr[i+1];
            i++;
        }
        arr->lastIndex=arr->lastIndex-1;
        return(1);
    }
    if(index==arr->lastIndex){
        arr->lastIndex=arr->lastIndex-1;
        return(1);
        }
}
int search(struct ArraADT* arr,int Item){
    int i;
    if(arr->lastIndex==-1)
        return (-1);
    for(i-0;i<=arr->lastIndex;i++){
        if(arr->ptr[i]==item)
            return(1);
    return(-1);
    }
}

void sort(struct ArraADT* arr){
    int r,n,i,t;
    n=arr->lastIndex+1;
    for(r=1;r<=n-1-;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(arr->ptr[i]>arr->pri[i+1])
            {
                t=arr->ptr[i];
                arr->ptr[i]=arr->ptr[i+1];
                arr->ptr[i+1]=t;
            }
        }
    }
}
main()
{
    struct ArraADT *arr;
    arr=createArray(5);
    setItem(arr,0,10)
    setItem(arr,1,40)
    setItem(arr,2,80)
    setItem(arr,3,50)
    setItem(arr,4,30)
    for(i=0.i<countItem(arr);i++)
        printf("%d  ",getItem(arr,i));

}
