#include<stdio.h>
#include<math.h>

int main()
{
    int U,T,S;
    printf("Enter Intitial Velocity >> ");
    scanf("%d",&U);
    printf("Enter Time Taken(in seconds) To Cover Distance >> ");
    scanf("%d",&T);
    S = U*T + 9.8/2*(pow(T,2));
    
    printf("Distance Covered In %ds is %dm with initial velocity %dm/s and acceleration 9.8m/s².");
    return 0;
}