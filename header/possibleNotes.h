#include <stdio.h>


void possibleNotes(){
    
 int notes[]= {100,50,20,10,5,2,1};
 int totalmoney;
 int size = sizeof(notes)/sizeof(int);

 printf("Enter total money : ");
 scanf("%d",&totalmoney);

 if (totalmoney<0) {
 printf("Money can't be Negative\n");
 return;
 }

 int current;
 for (int i = 0; i < size ; i++)
 {
 current = totalmoney/notes[i];
 printf("%d Notes(s) of %d\n",current,notes[i]);
 totalmoney = totalmoney%notes[i];
 }

} 
