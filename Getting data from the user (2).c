#include <stdio.h>

int main()
{
	float A,B,sum,sub,mul;
	
	printf("Value A: ");
	scanf("%f",&A);
	
	printf("Value B: ");
	scanf("%f",&B); 
	
	sum =A+B;
	sub=A-B;
	mul=A*B;
	printf("%f + %f= %f.\n",A,B,sum);
	printf("%f - %f= %f.\n",A,B,sub);
	printf("%f * %f= %f.\n",A,B,mul);
	
	return 0;
}