#include<stdio.h>
int main()
{
	float l,b,P;
	printf("Enter value of l ");
	scanf("%f",&l);
	printf("Enter value of b ");
	scanf("%f",&b);
	P=2*(l+b);
	printf("P=%.2f\n",P);
	getch();
	return 0;
}
