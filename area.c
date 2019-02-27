/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter .For example, the area of the rectangle with length =5 and breadth=4 is greater than its perimeter.*/
#include<stdio.h>
void main()
{
int area,length,breadth,perimeter;
printf("enter the length of the rectangle:");
scanf("%d",&length);
printf("enter the breadth of the rectangle:");
scanf("%d",&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
if(area>perimeter)
	{
	printf("Area of the rectangle is greater than its perimeter");
	}
else
	{
	printf("Area of the rectangle is not greater than its perimeter");
	}
}
