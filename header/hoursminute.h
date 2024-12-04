#include<stdio.h>
void minutesconvertor(){
 int minute,hour;
 printf("Enter total minutes : ");
 scanf("%d",&minute);
 hour = minute/60;
 minute = minute%60;
 printf("%d hours, %d minutes\n",hour,minute);
} 