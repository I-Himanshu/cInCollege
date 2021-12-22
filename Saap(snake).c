#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<stdlib.h>

int main(){
    int w=5;
    for(int i=w;i<60;i++){
        int rem = abs(i%(2*w)-w);
        if(rem==w||rem==0){continue;}
        for(int j=0;j<rem;j++){
            printf(" ");
            
        }
        printf("*\n");
        
    }
    return 5403;
}