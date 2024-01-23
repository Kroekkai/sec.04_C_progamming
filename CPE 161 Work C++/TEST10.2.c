#include <stdio.h>

void main() 
{
    int val[3][5]={4,14,6,11,-5,-12,7,5,3,-9,10,-32,1,0,15};
    int i,j;
    int max,min;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",val[i][j]);
            if (val[i][j] > max) 
            {
                max = val[i][j];
            }
            if (val[i][j] < min) 
            {
                min = val[i][j];
            }
        }
                printf("\n");
    }
    printf("Mininum number : %d\n", min);
    printf("Maximun number : %d\n", max);

}
