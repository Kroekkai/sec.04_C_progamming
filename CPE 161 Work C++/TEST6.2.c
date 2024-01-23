#include <stdio.h>
main()
{
	float m,p,v;
	printf("Enter your price :");
	scanf("%f",&p);
	if (p>5000){
		v=p*7/100;
		m=p+v;
		printf("VAT 7 percent \n");
		printf("Your pay: %.2f",m);
	}
	else{
		printf("VAT 0 percent \n");
		printf("Your pay: %.2f",p);
	}
}
