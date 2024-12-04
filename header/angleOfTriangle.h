#include <stdio.h>

void angleOfTriangle(){

 int totalangle = 180;
 int angle1,angle2,angle3;

 printf("Enter First and Second angles of Triangle : ");
 scanf("%d %d",&angle1,&angle2);

 if (angle1+angle2>=180)
 {
 printf("invalid angles\n");
 return;
 }

 angle3 = totalangle-angle1-angle2;
 
 printf("Third Angle is : %d\n",angle3);

} 
