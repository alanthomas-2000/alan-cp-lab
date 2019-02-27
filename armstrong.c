/*program to check armstrong or not*/
#include<stdio.h>
void main()
{
	int rem=0,sum=0,number,n;
	printf("enter the number:");
	scanf("%d",&number);
	n=number;
	while(number>0)
		{
		rem=number%10;
		number=number/10;
		sum=sum+(rem*rem*rem);
		}
	if(sum==n)
		{
		printf("the number is armstrong");
		}
	else
		{
		printf("the number  is not armstrong");
		}
}
