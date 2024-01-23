#include <stdio.h>
main()
{
	int money,ten,five,two,one;
	printf("Enter your money:");
	scanf("%d",&money);
	ten=money/10;
	money=money%10;
	five=money/5;
	money=money%5;
	two=money/2;
	money=money%2;
	one=money;
	printf("10=%d bath\n 5=%d bath\n 2=%d bath\n 1=%d bath\n",ten,five,two,one);
}
