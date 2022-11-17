#include "header.h"

float getPayRate()
{
	float payRate;
	printf("Enter pay rate:\n");
	scanf_s("%f", &payRate);
	return payRate;
}

float getOTHours()
{
	float otHours;
	printf("Enter OT hours:\n");
	scanf_s("%f", &otHours);
	return otHours;
}

void calcPay(float rate, float hours)
{
	float tax = 0.7;
	float basePay = rate * 80 * tax;
	printf("Base pay: $%.2f\n", basePay);
	float otPay = rate * 1.5 * hours * tax;
	printf("OT pay: $%.2f\n", otPay);
	printf("Total pay: $%.2f\n", basePay + otPay);
}