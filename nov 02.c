#include<stdio.h>
#include<string.h>
main()
{
	char s1[50]="i am a student";
	char s2[20]="at lpu";
	strncat(s1,s2,3);
	printf("%s\n",s1);
}
