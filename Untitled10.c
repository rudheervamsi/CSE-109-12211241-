#include<stdio.h>
main()
{ 
	char g;
	printf("enter the choice of char: ");
	scanf("%c", &g);
	switch(g)
	{

		case 'a':
			printf("you enter choice: a");
		break;	
		case 'b':
			printf("you enter choice: b");
			
					case 'c':
			printf("you enter choice: c");
			
		default:
		printf(" you entered choice is not there");	
	}
}
