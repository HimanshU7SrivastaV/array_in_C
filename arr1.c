#include<stdio.h>
void main()
{
	int n[5],i,sum=0;
	int *x;
	x=n;
	printf("enter five values: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	i=100;
	while(i<105)
	{
		sum=sum+(*x);
		x++;i++;
	}
	printf("The sum of all elements is: %d",sum);
	getch();
}
