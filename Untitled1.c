#include<stdio.h>
main()
{
	int arr[5];
	int n;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("\n enter the elements in the array");
	
	{
	int i;
	for (i=0;i<n;i++)
	scanf("%d",arr[i]);
    }
    printf("\nshow the elements in the array\n");
    
    {
	
    for(i=0;i<n; i++)
    
    	printf("%d",arr[i]);
    }
	

}
