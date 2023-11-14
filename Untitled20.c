#include<stdio.h>
main()
{
	int sum;
	int arr[6];
	int i;
	printf("enter the elements \n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n show the elements \n");
		
	for(i=0;i<6;i++)	
	{
		printf("%d",arr[i]);
		 sum=sum+arr[i];
		printf("%d",sum);
		
	}
	printf("\n the sum is %d",sum);
	int s=0;
	int e=0;
	for (i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("\n the even numbers %d",arr[i]);
			e=e+arr[i];
		}
		else
		{
			printf("\n the odd numbers %d",arr[i]);
			s=s+arr[i];
			
		}
		
		{
			printf("\n the sum of odd  numbers is %d",s);
						printf("\n the sum of odd  numbers is %d",e);

			
		}
	}
	
	
	
	
	
	
	
}
