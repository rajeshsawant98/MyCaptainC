/*Write a C program that first asks for the marks.Take an input after printing “Enter marks”. 
Then use decision making and print “Grade A”, “Grade B”, “Grade C”, “Grade D” or “Grade F”
based on the bins provided above.*/

#include<stdio.h>

int main()
{
	int m;
	
	printf("Enter Marks: ");
	scanf("%d",&m);
	
		printf("Grade : ");
	if(m>=85 && m<100)
	{
	 printf("A");
	}
	else if(m>69 && m<84)
	{
	 printf("B");
	}
	else if(m>54 && m<70)
	{
	 printf("C");
	}
	else if(m>39 && m<55)
	{
	 printf("D");
	}
	else if(m<40)
	{
	 printf("F");
	}
}
