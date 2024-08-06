#include<stdio.h>
#include<conio.h>

 main()
{
	int a,b,c;
	
	printf("enter the value a:");
	scanf("%d",&a);
	
	printf("enter the value b:");
	scanf("%d",&b);
	
	printf("enter the value c:");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			if(b<c)
			{
			   printf("a is min");
			}
		}
		else
		{
			printf("c is min");
		}
	}
	else
	{
	  printf("b is min");	
	}
}
