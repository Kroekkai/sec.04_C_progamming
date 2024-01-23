#include <stdio.h>
void main()
{
    int num[5],total;
    int numbers[5];;
    int i, min;
     for (i = 0; i < 5; i++) {
        printf("Enter number : ");
        scanf("%d", &numbers[i]);

        if (i == 0 || numbers[i] < min) {
            min = numbers[i];
        }
    }


    printf("mininum number = %d\n", min);

}
