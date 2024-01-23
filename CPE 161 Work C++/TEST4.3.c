#include <stdio.h>
main()
{
	float i,j,k;
	i=111.23456;
	j=7.2345678e2;
	k=345;
	printf("\nFixed point format \ni= %f j= %f k= %f",i,j,k);
	printf("\nFixed 3 point format \ni= %.3f j= %.3f k= %.3f",i,j,k);
}
