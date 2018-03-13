#include<stdio.h>
void main()
{
	int num,count=0;
	scanf("%d\t",&num);
	for(int  i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("is a prime");
	}
	else
	{
		printf("not a prime");
	}
	
}
