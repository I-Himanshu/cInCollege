/*
Title: Get Your Percentage
Author: Himanshu Kumar
Date: 23 December 2021
Time: 10:04 to 
Place: BCE baktiyarpur Room No 233
Description: This Program will take your 
            marks as input and return your
            percentage as output
*/


#include<stdio.h>
int main() {
    int P,C,M,E,H,Total;
    float Percentage;
    printf("Enter Your Physics's Marks: ");
    scanf("%d",&P);
    printf("Enter Your Chemistry's Marks: ");
    scanf("%d",&C);
    printf("Enter Your Mathematics's Marks: ");
    scanf("%d",&M);
    printf("Enter Your English's Marks: ");
    scanf("%d",&E);
    printf("Enter Your Hindi's Marks: ");
    scanf("%d",&H);
    Total = P+C+M+E+H;
    Percentage = Total*100/(5*100);
    printf("Your Total Marks Is %d\n",Total);
    printf("You Got %.2f%c\n", Percentage,'%');
    if(Percentage<0){
        printf("Congratulations You Dumb You Got Negetive Marks");
    }else if(Percentage<33.34){
        printf("You Are A Third Grade Student");
    }else if(Percentage<66.67){
        printf("You Are A Third Grade Student");
    }else if(Percentage<=100){
        printf("You Are A First Grade Student");
    }else if(Percentage>100){
        printf("You Are An Extraordinary Students");
    }else{
        printf("If This Line In Running Then I Just Want To Say \nThis Is Beyond Science 😐 ");
    }
    
    
    return 5403;
}
