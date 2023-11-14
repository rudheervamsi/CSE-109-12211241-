#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	printf("enter the numbers of integers to be used");
	scanf("%d",&n);
	p=(int*)calloc(n,(sizeof(int)));
	if(p==NULL)
	{
		printf("no memory availble");
		exit(1);
	}
	else
	{
		printf("memory allocation was sucessful");
		printf("enter the values \n");
		for(i=0;i<n;i++)
		    {
		    	scanf("%d",*(p+i));
			}
	}
	
	
}
