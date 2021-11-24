#include<stdio.h>
#include "calender.h"

#define TRUE    1
#define FALSE   0

int main(void)
{
	int year, daycode, leapyear;
	
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
}
