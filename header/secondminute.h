#include<stdio.h>
void secoundstohours(){
 int minute, hour, seconds;
 printf("Enter total seconds : ");
 scanf("%d", &seconds);
 hour = (seconds/3600);
 minute = (seconds%3600)/60;
 seconds = (seconds%3600)%60;
 printf("H:M:S - %02d:%02d:%02d\n",hour,minute,seconds);
} 