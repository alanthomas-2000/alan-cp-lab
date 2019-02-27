/*program to find the reverse of a number*/
#include<stdio.h>
void main()
{
	int rem=0,reverse=0,i,num;
	printf("enter the number:");
	scanf("%d",&num);
	
	while(num>0)
		{
		rem=num%10;
		num=num/10;
		reverse=reverse*10+rem;
		}
	printf("the reverse is %d",reverse);
}
	

