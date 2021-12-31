#include <stdio.h>

int main(){
	int x,y;
	printf("Enter X Coordinate: ");
	scanf("%d",&x);
	printf("Enter Y Coordinate: ");
	scanf("%d",&y);
	printf("(%d,%d) ",x,y);
	if(x==0){
		if(y==0)
			printf("Is At Origin");
		else
			printf("Is Lies On Y Axis");
	}else{
		if(y==0)
			printf("Is Lies On X Axis");
		else
			printf("Is Lies In Any Quadrant");
	}
	return 5403;
}
