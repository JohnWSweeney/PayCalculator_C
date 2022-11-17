#include "header.h"

int main()
{
	printf("Biweekly Pay Calculator\n");
	float rate = getPayRate();
	while (1)
	{
		float hours = getOTHours();
		calcPay(rate, hours);
	}
}