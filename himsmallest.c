#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n[5],t;
	int *p,*min;
	p=&n[0];
	printf("enter the five elements:\t");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	p=&n[0];
	min=p;
	for(i=0;i<5;i++)
	{
/*		for(j=i+1;j<5;j++)
		{
			if(*(p+j)<(*(p+i)))
			{
			t=(*(p+j));
			*(p+j)=(*(p+i));
			*(p+i)=t;
		
			}
		}*/
	if (*(p+i)<(*min))
	{
		(*min)=(*(p+i));
		
		}
	}
	printf("the smallest no. is :\t ");
	printf("%d",*min);
	getch();
	return(0);
}
