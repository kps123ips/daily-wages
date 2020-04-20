#include<stdio.h>
int main()
{
	int h,r,wages;
	printf("Enter hours and rate");
	scanf("%d%d",&h,&r);
	if(h<=35)
	wages=h*r;
	else if(h<=60)
	wages=35*r+(h-25)*1.5*r;
	else
	wages=35*r+25*1.5*r+(h-60)*2*r;
	printf("Wages = %d",wages);
	getch();
}
