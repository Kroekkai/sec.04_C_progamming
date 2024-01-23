#include <stdio.h>
main()
{
	float b,m,n;
	printf("X=");
	scanf("%f",&n);
	if(n<=4999){
		printf("VV=%f",n);
	}
	else if ((n>=5000)&&(n<=10000)){
		m=n*3/100;
		b=m-n;
		printf("VV=%f",b);
	}
	else{
		m=n*5/100;
		b=m-n;
		printf("VV=%f",b);
	}
}
