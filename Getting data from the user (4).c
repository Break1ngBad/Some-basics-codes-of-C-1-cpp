#include <stdio.h>

int main()
{
    int days,week;
	printf("Enter the day of the week (1-7): ");
	scanf("%d",&days);
	
	
	if ( days<=0)
	{
	    printf("There is no such day: -1. Input value must be from 1 to 7.");
	}
	else if (days==1)
	{
	   printf("The day of week is: Monday");
	}
	
	else if (days==2)
	{
	   printf("The day of the week is: Tuesday");
	}
	else if (days==3)
	{
	   printf("The day of the week is: Wednesday");
	}
	else if (days==4)
	{
	   printf("The day of the week is: Thursday");
	}
	else if (days==5)
	{
	   printf("The day of the week is: Friday");
	}
	else if (days==5)
	{
	   printf("The day of the week is: Saturday");
	}
	else if (days==7)
	{
	   printf("The day of the week is: Sunday");
	}
	else
	{
	    printf("Invalid input. Please enter a number between 1 and 7.");
	}
	return 0;
}