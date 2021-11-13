#include<stdio.h>
void main()
{
	int p,t,si;
	float r;
	printf("enter principle amount: ");
	scanf("%d",&p);
	printf("enter the time: ");
	scanf("%d",&t);
	printf("enter  rate of the interest: ");
	scanf("%f",&r);
	si=(p*t*r/100);
	printf("the simple interest %d",si);
	
}
