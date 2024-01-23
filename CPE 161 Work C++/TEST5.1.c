#include <stdio.h>
main()
{
	int i = 1,sum = 0;
	while (i <= 10) {
		printf("%d\n" , i);
		sum += i;
		i++;
		}
	printf("Sum 1 - 10 : %d\n" ,sum);
	return 0;
}
