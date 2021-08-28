#include <stdio.h>
#include <stdlib.h>

struct ArrayADT{
  int* elements;
  int capacity
};

void createNewArray(struct ArrayADT* arrayName, int arraySize){
    arrayName->capacity=arraySize;
    arrayName-> elements = (int *)malloc(arraySize*sizeof(int));
}
void  setArrayelement(struct ArrayADT* arrayName, int index, int val){
     arrayName->elements[index]=val;
}
int getArrayElement(struct ArrayADT* arrayName, int index){
    return(arrayName->elements[index]);
}
void clearArray(struct ArrayADT* arrayName){
    free(arrayName->elements);
}
int main()
{
    struct ArrayADT a={NULL,0};
    int i;
    createNewArray(&a,5);

    for(i=0; i<5; i++)
    {
        setArrayelement(&a,i,i*1000);
        printf("Array element at index %d is %d\n",i,getArrayElement(&a,i));
    }

    clearArray(&a);
    return 0;
}
