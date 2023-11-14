// pass by value
#include<stdio.h>
void swap1(int *, int *);
main()
{
	int a, b;
	a=4;
	b=8;
printf("a=%d and b=%d ",a, b );
swap1(&a,&b);	
}
void swap1(int *x, int *y)
{
	
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("\n values after swapping operstion in function a= %d and b=%d", *x,*y);
}
