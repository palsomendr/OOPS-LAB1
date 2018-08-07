#include<stdio.h>
#include<conio.h>
int main()
{
	int n,d;
	printf ("enter the number n");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("%d",n);
	}
	else
	{
	  
	d=n%7;
	n=n+(7-d);


	printf("the value is %d",n);
}
}
