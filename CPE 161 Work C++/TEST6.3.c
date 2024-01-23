#include <stdio.h>
main()
{
	float p,c;
	printf("Enter of pieces :");
	scanf("%f",&p);
	if(p>=1000){
		c=p*6.5;
		printf("Cost=%.2f",c);
	}
	else if((p>=500) && (p<=999)){
		c=p*7.5;
		printf("Cost=%.2f",c);
	}
	else{
		c=p*8.5;
		printf("Cost=%.2f",c);
	}
}
