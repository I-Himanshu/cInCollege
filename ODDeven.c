#include <stdio.h>

int main(){
	int num;
	printf("Enter A Number: ");
	scanf("%d",&num);
	if(num%2){
		printf("%d Is ODD",num);
	}else{
		printf("%d Is EVEN",num);
	}
	return 5403;
}
