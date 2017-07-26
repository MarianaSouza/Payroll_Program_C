#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>

float fulltime(int i);
float piece(int i);
float comission(int i);
float hourly(int i);
float contract(int i);

#define MAXARRAY 10 

struct Record {
	int id;
	char fname[50];
	char lname[50];
	int type;
	float salary;
};
void main()
{
	int i;
	struct Record employee[MAXARRAY];
	printf("\nThis program will calculate the salary for employees entered.\n");
	printf("\nRegarding the employee TYPE, consider this:");
	printf("\n1 = fulltime, 2 = piece comission, 3 = sales comission,");
	printf("\n4 = hourly and 5 = contract");
	printf("\nThis program will calculate the salary for up to %d employees.\n\n", MAXARRAY);

	for (i = 0; i < MAXARRAY; i++) {
		printf("\nEnter employee ID Number: ");
		scanf("%d", &employee[i].id);
		printf("Enter employee First Name: ");
		scanf("%s", &employee[i].fname);
		printf("Enter employee Last Name: ");
		scanf("%s", &employee[i].lname);
		printf("Enter employee Type: ");
		scanf("%d", &employee[i].type);
	}
	for (i = 0; i < MAXARRAY; i++) {
		if (employee[i].type == 1) {
			employee[i].salary = fulltime(i);
		}
		if (employee[i].type == 2) {
			employee[i].salary = piece(i);
		}
		if (employee[i].type == 3) {
			employee[i].salary = comission(i);
		}
		if (employee[i].type == 4) {
			employee[i].salary = hourly(i);
		}
		if (employee[i].type == 5) {
			employee[i].salary = contract(i);
		}
	}
	printf("Here is the list of all employees\n\n");
	for (i = 0; i < MAXARRAY; i++)
	{
		printf("----------------------------------------\n");
		printf("Employee Type: %d\n", employee[i].type);
		printf("Employee ID: %d\n", employee[i].id);
		printf("First Name: %s\n", employee[i].fname);
		printf("Last Name: %s\n", employee[i].lname);
		printf("Salary: %.1f\n", employee[i].salary);
	}
	system("pause");
	
}
float fulltime(int i)
{
	float biWeekSalary;
	float taxPercentage;
	float taxDiscount;
	float salary;
	printf("\nWe detect that employee %d is fulltime\n", i++);
	printf("Enter how much is the bi week salary: ");
	scanf("%f", &biWeekSalary);
	printf("Enter how much is the tax deduction in percentage (example: 12): ");
	scanf("%f", &taxPercentage);
	taxDiscount = (biWeekSalary * 2) * taxPercentage / 100;
	salary = biWeekSalary * 2 - taxDiscount;
	printf("The salary is: ");
	printf("%.1f\n\n", salary);
	return salary;
}
float piece(int i)
{
	float numberProductsSold;
	float priceProduct;
	float salary;
	printf("\nWe detect that employee %d is piece based\n", i++);
	printf("Enter how many products the employee sold: ");
	scanf("%f", &numberProductsSold);
	printf("Enter the price of the product: ");
	scanf("%f", &priceProduct);
	salary = numberProductsSold * priceProduct;
	printf("The salary is: ");
	printf("%.1f\n\n", salary);
	return salary;
}
float hourly(int i)
{
	//Hourly worker, they get $20 per hour under 40 hours a week, $30 for the remaining over time
	float hoursRegular;
	float hoursOvertime;
	float salary;
	printf("\nWe detect that employee %d is hourly based\n", i++);
	printf("Enter the number of hours before overtime($20/hour): ");
	scanf("%f", &hoursRegular);
	printf("Enter the number of hours WITH overtime($30/hour): ");
	scanf("%f", &hoursOvertime);
	salary = (hoursRegular * 20) + (hoursOvertime * 30);
	printf("The salary is: ");
	printf("%.1f\n\n", salary);
	return salary;
}
float comission(int i)
{
	float salary;
	float sales;
	printf("\nWe detect that employee %d is comission\n", i++);
	printf("Enter how much the employee sold: ");
	scanf("%f", &sales);
	salary = sales*0.3;
	printf("The salary is: ");
	printf("%.1f\n\n", salary);
	return salary;
}
float contract(int i)
{
	float salary;
	printf("\nWe detect that employee %d is contract\n", i++);
	printf("Enter how much is the salary: ");
	scanf("%f", &salary);
	printf("The salary is: ");
	printf("%.1f\n\n", salary);
	return salary;
}