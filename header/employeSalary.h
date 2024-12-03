#include <stdio.h>


void employeSalary(){

 int id,workedhour,perhour,salary;

 printf("Enter Employee ID : ");
 scanf("%s",&id);

 printf("Enter Working Hrs : ");
 scanf("%d",&workedhour);

 printf("Enter Salary/hr: ");
 scanf("%d",&perhour);

 salary = perhour*workedhour;

 printf("Employee ID = %d\n",id);
 printf("Salary = %d\n",salary);
 
} 