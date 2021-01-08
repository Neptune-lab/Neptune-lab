#include<stdio.h>
#include<math.h>

int main()
{
	double rate,cap,deposit;
	int year;
	char fl;
	printf("Input rate, year, capital:\n");
	scanf("%lf,%d,%lf",&rate,&year,&cap);
	printf("Compound interest (Y/N)?\n" );
	scanf(" %c",&fl);
	if(fl=='Y'||fl=='y')
	{
		deposit=cap*pow(1+rate,year);
	}
	else
	{
		deposit=cap*(1+rate*year);
	}
	printf("deposit = %.4f\n",deposit);
	return 0;
 } 
