// pointer to 1d array
#include<stdio.h>
main()
{
	int var=5;
	int * ptr2;
	int **ptr1;
ptr2=2var;
ptr1=&ptr2;
	
printf("value of var =%d\n", var);
printf("value of var using pointer =%d\n",*ptr2);
printf("value of var using double pointer =%d\n", **ptr1);


print(" own address of var =%d\n", &var);
print(" own address of ptr2 =%d\n", &ptr2);
print(" own address of ptr1 =%d\n", &ptr1);
	
	printf("address of val held by ptr2 =%d\n",ptr2);
	printf("address of ptr2 held by ptr1 =%d\n",ptr1);
	printf("expp =%d\n",*ptr1);
				
}
