/*program to check palindrome or not*/
#include<stdio.h>
void main()
{
	int rem=0,reverse=0,i,num,n;
	printf("enter the number:");
	scanf("%d",&num);
	n=num;
	while(num>0)
		{
		rem=num%10;
		num=num/10;
		reverse=reverse*10+rem;
		}
	if(reverse==n)
		{
		printf("the number is palindrome");
		}
	else
		{
		printf("the number is not palindrome");
		}
}
	

