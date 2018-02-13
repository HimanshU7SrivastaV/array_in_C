#include<stdio.h>
#include<conio.h>
int check(int n)
{
	int i,a[20],x;
	for(i=0;i<n;i++)
	{
		if (x==a[i])
	printf("found %d",x);                                        \\ result not found
	}
	printf("not found");
     getche ();
}
int main()
{
	int a[20],x,n,i;
	printf("enter the limit of array element n:\t");
	scanf("%d",&n);
	printf("\nenter the array element:\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element the has to be find:\t");
	scanf("%d",&x);
	check(n);
	return(0);
	
}
