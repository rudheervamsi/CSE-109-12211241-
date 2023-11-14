#include<stdio.h>
int addnum(int);
main()
{
	int num=5;
	printf("sum= %d", addnum(a));
}
int addnum( int n)
{
	if (n==0)
	return n;
	else
	return  n + addnum(n-1 );
 } 







