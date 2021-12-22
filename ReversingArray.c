#include <stdio.h>
#define size 7


void printArray(int arr[]){
    for(int i=0;i<=size;i++){
        printf("The Value At Index %d is %d\n",i,arr[i]);
    }
    printf("\n");
}
void revArray(int arr[]){
    for(int i=0;i<=size/2;i++){
        int tVal=arr[i];
        arr[i] = arr[size-i];
        arr[size-i]=tVal;
    }
}
int main(){
    int are[] = {1,4,18,2,3,5,6,7};
    printArray(are);
    revArray(are);
    printArray(are);
    
    return 5403;
}