#include <stdio.h>
main()
{
	int i=1;
	int n=1;
	while(i<=20)
	{
		if(n % 5==0)
		{
			printf("%d\t",n);
			i++;
		}
	n++;			
	}
}
