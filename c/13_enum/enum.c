// 2022-05-19
// Mleon
// learn: enum

#include <stdio.h>

int main(void)
{
	// 定义枚举类型
	enum DAY
	{
		MON = 1, TUE, WED, THU, FRI, SAT, SUN
	};

	// 定义枚举变量	
	enum DAY day;

	// 遍历枚举元素
	for (day = MON; day <= SUN; day++)
	{
		printf("%d\n", day);
	}
	
	return 0;
}
