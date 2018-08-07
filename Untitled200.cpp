#include<stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
	int a,b,i,j,k,x,s;
	printf("enter the number i and j");
	scanf("%d",&i);
	scanf("%d",&j);
	x=(i*1100+j*11);
	printf("%d",x);
    s=sqrt(x);
    if((s*s)==x)
	printf("the perfect squre");
	else
	printf("the perfect not squre");
	
}
