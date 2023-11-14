 //sum of odd numbers and even numbers
#include<stdio.h>
main()
{
	int arr[10], a=0, s=0,i;
    for (i=0; i<4; i++)
{
	 printf("enter values\n");
	 scanf("%d",&arr[i]);
	}
for (i=0; i<5; i++)
	{
		if(arr[i]%2==0)
{
		
printf("sum of even numbers is");
printf("\n%d", arr[i]);
sum=sum+arr[i];
}
printf("\n odd numbers is");
printf("\n%d",arr[i]);
s=s+arr[i];
}
printf("\n sum of even numbers is %d",sum);
printf("\n sum of odd numbers is %d",sum);
}
smallest = arr[0];

}


