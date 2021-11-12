/*write a c program to convert given minutes into hours*/
#include<stdio.h>
void main()
{
	int minutes,h,m;
	printf("The given minutes");
	scanf("%d",&minutes);
	h=minutes/60;
	m=minutes%60;
	printf("%d hours(s) %d minutes)",h,m);
}
