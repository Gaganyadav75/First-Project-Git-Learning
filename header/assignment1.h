#include<stdio.h>
#include "displayVariable.h"
#include "myDetails.h"
#include "employeSalary.h"
#include "spherevol.h"
#include "angleOfTriangle.h"
#include "hoursminute.h"
#include "kmphToMiles.h"
#include "possibleNotes.h"
#include "secondminute.h"
#include "years.h"
void Assignment1(int n){
 switch (n)
 {
 case 1:
 printf("\n*** ** *MY DETAILS* ** *** \n");
 myDetails();
 break;
 case 2:
 printf("\n*** ** *TYPE OF VARIABLE* ** *** \n");
 displayVariable();
 break;
 case 3:
 printf("\n*** ** *EMPLOYEE SALARY* ** *** \n");
 employeSalary();
 break;
 case 4:
 printf("\n*** ** *VOLUME OF SPHERE* ** *** \n");
sphere();
 break;
 case 5:
 printf("\n*** ** *KM/H TO MILE/H* ** *** \n");
kmphToMiles();
 break;
 case 6:
 printf("\n*** ** *MINUTES TO HOURS* ** *** \n");
minutesconvertor();
 break;
 case 7:
 printf("\n*** ** *THIRD ANGLE OF TRIANGLE* ** *** \n");
angleOfTriangle();
 break;
 case 8:
 printf("\n*** ** *DAYS INTO YEARS* ** *** \n");
years();
 break;
 case 9:
 printf("\n*** ** *BANK NOTES* ** *** \n");
 possibleNotes();
 break;
 case 10:
 printf("\n*** ** *SECONDS TO HOURS* ** *** \n");
secoundstohours();
 break;

 default:
 printf("Invalid Number");
 break;
 }
}