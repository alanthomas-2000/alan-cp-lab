/*Inverted half pyramid using ' *'

* * * * *
* * * *
* * * 
* *
*
		*/

#include<stdio.h>
void main()
{
int limit,i,j;
printf("enter the limit of ypur pyramid:");
scanf("%d",&limit);
for(i=limit;i>0;i--)
{
	for(j=i;j>0;j--)
		{
		printf("*");
		}
	printf("\n");
	}
}
