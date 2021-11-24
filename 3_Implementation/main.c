#include<stdio.h>


#define TRUE    1
#define FALSE   0

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};

//Function to get user's input for a year between 1000 and 3000
int inputYear(void)
{
	int year;

	printf("Please enter a year between 1000 and 3000: ");
	scanf("%d", &year);
	if (year<1000 || year>3000){
		printf("Invalid year entered. Please enter a valid year.");
		inputYear();
	}
	return year;
}

//Function to compute the day code used to print the calender
int determineDayCode(int year)
{
	int dayCode;
	int d1, d2, d3;

	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	dayCode = (year + d1 - d2 + d3) %7;
	return dayCode;
}

//Function to determine whether the input is a leap year or not
int determineLeapYear(int year)
{
	if(year% 4 == FALSE && year%100 != FALSE || year%400 == FALSE)
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

//Function to display the calender for the input year
void calendar(int year, int dayCode)
{
	int month, day;
	for ( month = 1; month <= 12; month++ )
	{
		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// To align the first date properly.
		for ( day = 1; day <= 1 + dayCode * 5; day++ )
		{
			printf(" ");
		}

		// To print all the dates for a month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d", day );

			// Print space if the day is not Sunday, else print \n
			if ( ( day + dayCode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
			// Set position for next month
			dayCode = ( dayCode + days_in_month[month] ) % 7;
	}
}

//Function to find the day for a particular date using date, month, and year as inputs
void zeller()
{
    int yearTemp, year, month, date, leftTwoDigs = 0, rightTwoDigs = 0, temp = 0, dayCodeZ = 0;
    char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("\n\nPlease enter a year between 1000 and 3000: ");
    scanf("%d", &year);
	while (1){
        if (year<1000 || year>3000){
            printf("Invalid year entered. Please enter a valid year.\n\n");
            printf("Please enter a year between 1000 and 3000: ");
            scanf("%d", &year);
            continue;
        }
        break;
	}

	yearTemp = year;

    printf("Please enter a month between 1 and 12: ");
    scanf("%d", &month);
	while (1){
        if (month<1 || month>12){
            printf("Invalid month entered. Please enter a valid month.\n\n");
            printf("Please enter a month between 1 and 12: ");
            scanf("%d", &month);
            continue;
        }
        break;
	}

	if (month == 1 || month == 2){
        month+= 10;
        year--;
	}
	else {
        month-= 2;
	}

	printf("Please enter a date between 1 and 31: ");
    scanf("%d", &date);
	while (1){
        if (date<1 || date>31){
            printf("Invalid date entered. Please enter a valid date.\n\n");
            printf("Please enter a date between 1 and 31: ");
            scanf("%d", &date);
            continue;
        }
        break;
	}

	temp = yearTemp % 10;
    yearTemp = yearTemp / 10;
    rightTwoDigs = (yearTemp % 10) * 10;
    rightTwoDigs = rightTwoDigs + temp;
    yearTemp = yearTemp / 10;
    temp = yearTemp % 10;
    yearTemp = yearTemp / 10;
    leftTwoDigs = (yearTemp % 10) * 10;
    leftTwoDigs = leftTwoDigs + temp;

    dayCodeZ = date + (((13*month)-1)/5) + rightTwoDigs + (rightTwoDigs/4) + (leftTwoDigs/4) - (2*leftTwoDigs);
    if (dayCodeZ < 0) {
        dayCodeZ = dayCodeZ % 7;
        dayCodeZ = 7 - dayCodeZ;
    }
    else {
        dayCodeZ = dayCodeZ % 7;
    }

    printf("The day for %d//%d//%d is %s", date, month, year, days[dayCodeZ]);
}


int main(void)
{
	int year, dayCode;

	year = inputYear();
	dayCode = determineDayCode(year);
	determineLeapYear(year);
	calendar(year, dayCode);
	
}
