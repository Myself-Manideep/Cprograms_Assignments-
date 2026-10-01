#include<stdio.h>
void main()
{

	int num,pos,result;
	printf("Enter any number :\n");
	scanf("%d",&num);
	printf("Enter the position:\n");
	scanf("%d",&pos);

	result = num ^ (1 << pos);

	printf("The number of setting the bit at position %d is %d.\n",pos,result);
}