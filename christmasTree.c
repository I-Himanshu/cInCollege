#include <stdio.h>

int makePiramid(int W,int H,int F){
	int i,j,k;
	for(i=1;i<=H;i++){
		for(j=H-i;j>0;j--){
			printf("_");
		}
		for(k=F;k<=3*F+(2*i);k++){
			if(k>=F){
				printf("*",k);
			}
			
		}
		printf("\n");
	}
}



int main(){
	
	makePiramid(10,20,3);
	makePiramid(10,20,3);
	makePiramid(10,20,3);
	
	
	printf("\n ***CHRISTMAS TREE*** \n");
	return 5403;
}
