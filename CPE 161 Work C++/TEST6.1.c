#include <stdio.h>
main()
{
	int x,y,d;
	printf("Enter x is ");
	scanf("%d",&x);
	printf("Enter y is ");
	scanf("%d",&y);
	if(x>y){
		d=x-y;
		printf("Result is %d",d);
	}
	else if(x<y){
		d=x-y;
		printf("Result is %d",d);
	}
	else{
		d=x*y;
		printf("Result is %d",d);
	}
}
