/*If ages of Ram, Shyam and Ajay are input through the keyboard. Write a programme to determine the youngest of the three.*/
#include<stdio.h>
void main()
{
int ram,shyam,ajay;
printf("enter the age of ram:");
scanf("%d",&ram);
printf("enter the age of shyam:");
scanf("%d",&shyam);
printf("enter the age of ajay:");
scanf("%d",&ajay);
if(ajay<shyam&&ajay<ram)
	{
	printf("Ajay is youngest of the three");
	}

if(shyam<ajay&&shyam<ram)
	{
	printf("Shyam is youngest of the three");
	}
		
if(ram<shyam&&ram<ajay)
	{
	printf("Ram is youngest of the three");
	}
		
	
}

