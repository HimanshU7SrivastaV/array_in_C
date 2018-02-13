#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n[5],product=1;
	int *p;
	p=&n[0];
	printf("enter the five elements:\t");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	p=&n[0];
	for(i=0;i<5;i++)
	{
		product=(product)*(*(p+i));
		//p++;
	}
	printf("the product of these two no. is :\t ");
	printf("%d",product);
	getch();
	return(0);
}
