// program to find the factorial of a number using while loop

#include<stdio.h>
main()
{
	int i=1 , n , sum=0, fact=1;
	printf("Enter any number");
	scanf("%d",&n);
	while(i<=n)
	{
    fact=fact*i;
		i++;
	}
	printf("factorial is %d",fact);
	
	
}

