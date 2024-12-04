#include<stdio.h>
void years(){
 int daysinYear = 365;
 int years,weeks,days;
 printf("Enter total days : ");
 scanf("%d",&days);
 years = days/daysinYear;
 weeks = (days%daysinYear)/7;
 days = (days%daysinYear)%7;
 printf("%d Years, %d Weeks, %d Days\n",years,weeks,days);
} 