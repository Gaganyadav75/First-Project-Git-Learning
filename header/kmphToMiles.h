#include <stdio.h>

void kmphToMiles(){

 double onemile = 0.621371;
 double kmph,mileph;

 printf("Enter value in KM / hr : ");
 scanf("%lf",&kmph);

 mileph = kmph*onemile;

 printf("%lf Mile per hour\n",mileph);
 
} 
