#include <stdio.h>

int main(){
  char a[20];
  int i=0;
  gets(a);
  while(a[i]!='\0'){
    i++;
  }
  printf("%d",i);
  return 5403;
}