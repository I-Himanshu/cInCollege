#include <stdio.h>
#include <string.h>

int main(){
    char name[30], friendsName[30];
    printf("Enter Your Name : ");
    gets(name);
    printf("Enter Your Friend's Name : ");
    gets(friendsName);
    
    
    strcat(name, " Is Friend Of ");
    strcat(name, friendsName);
    printf("%s",name);
    
    
    return 5403;
}