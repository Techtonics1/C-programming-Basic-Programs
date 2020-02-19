#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("enter the values of a b c d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	printf("before swapping the values of a,b,c,d are a=%d b=%d c=%d d=%d \n",a,b,c,d);
	e=d;
	d=c;
	c=b;
	b=a;
	a=e;
	printf("after swapping the values are a=%d,b=%d,c=%d,d=%d",a,b,c,d);
	getch();
}
