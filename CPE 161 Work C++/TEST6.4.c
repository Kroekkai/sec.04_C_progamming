#include <stdio.h>
main()
{
	char vowel;
	printf("Enter your letter:");
	scanf("%c",&vowel);
	switch(vowel)
	{
		case'a':
		printf("Yes,it is vowel\n");
		break;
		case'e':
		printf("Yes,it is vowel\n");
		break;
		case'i':
		printf("Yes,it is vowel\n");
		break;
		case'o':
		printf("Yes,it is vowel\n");
		break;
		case'u':
		printf("Yes,it is vowel\n");
		break;
		    default:
			printf("No,It is alphabet\n");
	}
	
}
