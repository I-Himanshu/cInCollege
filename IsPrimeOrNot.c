#include <stdio.h>
int main(){
    int number,isprime=1;
    printf("Enter A Number : ");
    scanf("%d",&number);
    for(int i = 2;i<=number/2;i++){
        if(number%i==0){
            isprime = 0;
            break;
        }
    }
    if(isprime){
        printf("This Is A Prime Number");
    }else{
        printf("This Is Not A prime Number");
    }
    
    return 5403;
}