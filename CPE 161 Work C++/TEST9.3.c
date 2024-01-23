#include <stdio.h>
void main()
{
    int numbers[10];
    int i, evencount=0;
     for (i = 0; i < 10; i++) 
    {
        printf("Enter number : ");
        scanf("%d",&numbers[i]);
        if(numbers[i] % 2 == 0)
        {
            evencount++;
        }
    } 
    for (i = 0; i < 10; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            printf("%d \n", numbers[i]);
        }
    }
    printf("Number of Even = %d\n",evencount);
}
