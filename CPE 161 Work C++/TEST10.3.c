#include <stdio.h>

void main() 
{
    int val[3][4] = {500,420,366,207,611,485,382,301,877,745,592,473};
    int i, j;
    printf("Table number of student in faculty\n");
  	for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 4; j++) 
		{
            printf("%d\t", val[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 3; i++) 
	{
    	int sum=0;
        for (j = 0; j < 4; j++) 
		{
            sum += val[i][j];
        }
    	if (i == 0) 
		{
            printf("Total of Engineer : %d\n", sum);
        } else if (i == 1) 
		{
            printf("Total of Business : %d\n", sum);
        } else if (i == 2) 
		{
            printf("Total of Art : %d\n", sum);
        }
    }

}
