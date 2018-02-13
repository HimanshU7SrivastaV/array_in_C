#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n[50],t;
	int *p;
	p=&n[0];
	printf("enter the five elements:\t");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
	    *p+=1;
	    *p=*p%10;
	    p++;
	}
	printf("the new no. is :\t ");
	
	p=&n[0];
	while(i>0)
	{
		printf("%d",*p);
	//	printf("\t");        
		i--;
		p++;
	}
	getch();
	return(0);
}
