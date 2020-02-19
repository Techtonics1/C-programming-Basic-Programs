#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,a,b,c,d,e,f,g,h,i,j;
	printf("enter the amount");
	scanf("%d",&amt);
	a=amt/2000;
	amt=amt%2000;
	b=amt/500;
	amt=amt%500;
	c=amt/200;
	amt=amt%200;
	d=amt/100;
	amt=amt%100;
	e=amt/50;
	amt=amt%50;
	f=amt/20;
	amt=amt%20;
	g=amt/10;
	amt=amt%10;
	h=amt/5;
	amt=amt%5;
	i=amt/2;
	amt=amt%2;
	j=amt/1;
	printf("the notes are:\n");
	printf("%d*2000\n",a);
	printf("%d*500\n",b);
	printf("%d*200\n",c);
	printf("%d*100\n",d);
	printf("%d*50\n",e);
	printf("%d*20\n",f);
	printf("%d*10\n",g);
	printf("%d*5\n",h);
	printf("%d*2\n",i);
	printf("%d*1\n",j);
	getch();
	
}
