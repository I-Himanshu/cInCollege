#include<stdio.h>
int main() {
    int n,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    do{
        sum += n%10;
    }while(n/=10);
    printf("%d",sum);
    return 5403;
}