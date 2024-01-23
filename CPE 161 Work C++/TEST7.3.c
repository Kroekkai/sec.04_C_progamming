#include <stdio.h>
main()
{
	float i,n,m,s;
	printf("Input N :");
	scanf("%f",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter number:");
		scanf("%f",&m);
		s+=m;
	}
	printf("Sum:%.1f\t",s);
	printf("Avg:%.1f\n",s/n);
}

