//Write a C program to print the following pattern 01 0101 010101 01010101 0101010101 010101010101//

#include <stdio.h>

int main()
{
     int i,j;

   for(i=1;i<=6;i++)  
    {
       for(j=0;j<2*i;j++)

           printf("%d",j%2);

       printf("\n");

   }
}
