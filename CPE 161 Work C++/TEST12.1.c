#include <stdio.h>
void main()
{
	int num[3];
	int *p=num;
	int i;
	for(i=1;i<=3;i++)
	{
		printf("Enter Number %d : ",i);
		scanf("%d",&num[i]);
	}
	for(i=1;i<=3;i++)
	{
		printf("\nNumber %d = %d\t Pointer %d ",i,*(p+i),p+i);
	}
}
