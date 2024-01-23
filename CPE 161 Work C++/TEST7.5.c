#include <stdio.h>
main()
{
	int N,i;
	float s,v,n;
    i=1;
    printf("Enter number priece : ");
    scanf("%d", &N);
    while (i<=N) 
    {
        printf("Enter price %d: ",i);
        scanf("%f", &n);
        if(n>5000)
        {
            v=n*0.07;
            n+=v;
        }
        s+=n;
        i++;
    }
	printf("Total Payment: %.2f",s);
}
