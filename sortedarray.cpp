#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n[5],t;
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
		for(j=i+1;j<5;j++)
		{
			if(*(p+j)<(*(p+i)))
			{
			t=(*(p+j));
			*(p+j)=(*(p+i));
			*(p+i)=t;
		
			}
		}
	}
	printf("the sorted array is:\t");
	i=1;
	while(i<=5)
	{
	    printf("%d",*p);
	    printf("\n");
	    p++;
	    i++;
	}
	getch();
	return(0);
}
