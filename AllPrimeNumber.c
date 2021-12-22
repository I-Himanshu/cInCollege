#include <stdio.h>
int main(){
    int max,notprime;
    printf("Enter a Number : ");
    scanf("%d",&max);
    for(int i=1;i<=max;i++){
        notprime = 0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                notprime = 1;
                break;
            }
        }
        if(!notprime){
            printf("%d\n", i);
        }
    }
    return 5403;
}