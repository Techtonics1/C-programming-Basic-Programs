#include<stdio.h>
#include<conio.h>
void main()
{
	int age,a;
	printf("Enter your age");
	scanf("%d",&age);
	
	a=18-age;
	
	if(age>=18)
	{
		printf("Congratulations!!! You are eligible to vote");
	}
	else
	{
		printf("You have %d years to vote",a);
	}
	getch();
}
