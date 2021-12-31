#include <stdio.h>

int main(){
	int salary,year;
	float gross_salary,bonus;
	printf("Enter Your Salary: ");
	scanf("%d",&salary);
	printf("For How Many Years You Are Working: ");
	scanf("%d",&year);
	
	if(year>20){
		bonus = 0.2;
	}else{
		bonus = 0.05;
	}
	gross_salary = salary + salary*bonus;
	
	printf("Your Gross Salary Is %.2f",gross_salary);
	return 5403;
}
