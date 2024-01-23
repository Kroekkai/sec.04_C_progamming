#include <stdio.h>
main()
{	
	int i,n;
	printf("Input Start number:");
	scanf("%d",&i);
	printf("Input End number:");
	scanf("%d",&n);
	do
	{
		printf("%d\t",i);
		i++;
	}while(i<=n);
}
