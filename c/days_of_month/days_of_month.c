// 2022-05-18 2022-05-19
// Mleon
// learn: 表驱动法，判断某年某月的天数。

#include <stdio.h>
#include <stdbool.h>

int days_of_month(int year, int month);
bool is_leap(int year);

int main(void)
{
	int year, month;

	printf("input year = :\n");
	int year_input_result = scanf("%d", &year);
	if(year_input_result != 1) {
		printf("输入的数字不合法！\n");
		return 0;
	}

	printf("input month = :\n");
	int month_input_result = scanf("%d", &month);
	if(month_input_result != 1) {
		printf("输入的数字不合法！\n");
		return 0;
	}

	printf("%d年%d月有%d天\n", year, month, days_of_month(year, month));
	return 0;
}

int days_of_month(int year, int month)
{
	int days[12] = {31, is_leap(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};	
	return days[month - 1];
}
bool is_leap(int year)
{
	if(((year%4==0) && (year%100!=0)) || year%400==0){
		return true;
	} else {
		return false;
	}
}
