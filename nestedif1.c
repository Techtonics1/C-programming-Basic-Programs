#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	printf("Enter third number");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>b)
		{
			if(a>c)
			printf("first number is greater");
		}
			else
			{
				printf("third number is greater");
			}
	}
	else
	{
		if(b>c)
		{
			printf("Second number is greater");
		}
		else
		{
			printf("Third number is greater");
		}
	}
	getch();
}
