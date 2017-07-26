# Payroll_Program_C
####Payroll Program with Struct in C

Simple program that calculates employee’s salaries considering their types.

The program has a structure for employees that contains a char for name, a char for last name, an integer for type and a float for salary.

Each employee is on a different salary plan as followings:

1.	Full time, they get a pre-set bi weekly salary (considering tax deduction)
2.	Commission based, they get 30% of their sales
3.	Piece workers, they get $10 a piece
4.	Hourly worker, they get $20 per hour under 40 hours a week, $30 for the remaining over time
5.	Contract, they will get a certain amount with no tax deduction

At the end, when all elements of the employee array are filled, ma loop prints the name, last name, type and the salary of all employees.

