#include<stdio.h>
void main()
{
	int a[5],i,j,t;
	int *p;
	p=a;
	printf("enter five values: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
	{
		if((*(p+j))<(*(p+i)))
		{
			t= (*(p+j));
			*(p+j)=(*(p+i));
			*(p+i)=t;
		}
	}
	}
	//p=a;
	printf("The sorted array is: \n");
	i=100;
	while(i<105)
	{
	printf("%d",*p);
	p++;i++;
	}
	getch();
}
