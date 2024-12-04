#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "header/assignment1.h"
int main()
{int inp;

    do {

        // printf("\n ## 0 to exit ##");
        printf("\nEnter Program No. 1 - 10 or 0 to exit : ");
        scanf("%d", &inp);

        system("cls");

        if (inp != 0) {
            Assignment1(inp);
        }

    } while (inp != 0); 
return 0;
}

