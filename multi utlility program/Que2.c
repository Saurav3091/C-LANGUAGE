// Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA) Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.


#include<stdio.h> 


void main()
{
	int basic_salary,hra,da,ta,gross_salary; 
	
	printf("Enter Basic Salary :"); 
	scanf("%d",&basic_salary); 
	
	hra=basic_salary*10/100; 
	da=	basic_salary*5/100; 
	ta=basic_salary*8/100; 
	
	gross_salary=basic_salary+hra+da+ta; 
	
	printf("\nHRA is: %d",hra); 
	printf("\nDA is: %d",da); 
	printf("\nTA is: %d",ta); 
	printf("\nGross Salary is: %d",gross_salary); 
}