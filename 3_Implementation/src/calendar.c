#include<stdio.h>
#include "calendar.h"

int main(void)
{
	int year, dayCode;

	year = inputYear();
	dayCode = determineDayCode(year);
	determineLeapYear(year);
	calendar(year, dayCode);
	zeller();
	printf("\n");
}
