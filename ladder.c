#include<stdio.h>

int main(){
	int i,j;
	for(i = 1; i<=21; i++){
		for(j=1; j<=6; j++){
			if(j==2||j==5){
				printf("|");
			}
			else if(i%2==0){
				printf("_");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 5403;
}
