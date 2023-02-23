#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are left in the
 * year, taking leap years into account
 * @month: the month of the date
 * @day: the day of the date
 * @year: the year of the date
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days_left = 0;
	int is_leap_year = 0;

	is_leap_year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

	switch (month)
	{
		case 12:
			days_left += 30;
		case 11:
			days_left += 31;
		case 10:
			days_left += 30;
		case 9:
			days_left += 31;
		case 8:
			days_left += 31;
		case 7:
			days_left += 30;
		case 6:
			days_left += 31;
		case 5:
			days_left += 30;
		case 4:
			days_left += 31;
		case 3:
			days_left += 28 + is_leap_year;
		case 2:
			days_left += 31;
		case 1:
			days_left += day;
			break;
		default:
			printf("Invalid month.\n");
			return;
	}

	if (is_leap_year && month > 2)
		days_left++;

	printf("Day of the year: %d\n", days_left);
	printf("Remaining days: %d\n", 365 - days_left + is_leap_year);
}

