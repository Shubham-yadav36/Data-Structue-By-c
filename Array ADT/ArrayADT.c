struct ArraADT{
    int lastIndex;
    int capacity;
    int *ptr;
};
struct arrayADY* createArray(int capacity);
struct getItem(struct ArrayADT *arr,int index);
struct setItem(struct ArrayADT* arr,int index,int value);
struct modify(struct ArrayADT* arr,int index,int newValue);
struct countItem(struct ArrayADT*);
struct removeItem(struct ArrayADT* arr,int index);
int search(struct ArraADT*,int Item);

struct arrayADT* createArray(int capacity){
      struct ArrayADT *arr;
      arr = (struct ArraADT*)malloc(sizeof(struct arrayADT));
      arr ->capacity = capacity;
      arr ->lastIndex = -1;
      arr ->ptr = (int*)malloc(arr->capacity*sizeof(int));
      return(arr);
};
struct getItem(struct ArrayADT *arr,int index){
    if(arr->lastIndex<index || arr->lastIndex<0){
        printf("\nInvalid Index");
        return(-1);
    }
    else{
        return(arr->ptr[index]);
    }
};
struct setItem(struct ArrayADT* arr,int index,int value){
        if(arr->lastIndex == arr->capacity-1){// Array is full
            printf("\nArray is Already Full(Overflow)");
            return(0);
        };
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
    if(arr)
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
            arr->ptr[i] = arr->ptr[i+1];
            i++;
        }
        arr->lastIndex = arr->lastIndex-1;
        return(1);
    }
    if(index == arr->lastIndex){
        arr->lastIndex = arr->lastIndex-1;
        return(1);
        }
}

int search(struct ArraADT* arr,int Item){

}
