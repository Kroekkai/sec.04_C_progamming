#include <stdio.h>
main()
{
	float p,m,c;
	printf("Enter your price:");
	scanf("%f",&p);
	printf("Enter your money:");
	scanf("%f",&m);
	c=m-p;
	printf("change your=%.2f",c);
}
