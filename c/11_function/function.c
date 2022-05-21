// 2022-05-18
// Mleon
// learn: function

#include <stdio.h>

// 声明函数
void sum(int number_1, int number_2);
// 返回类型 函数名（类型 形参名...）;
// 形参——形式参数。
// 函数名：sum
// 函数的返回类型：void
// 函数的参数：有一两个，且都是int类型


int main(void)
{
	// 使用函数，调用函数
	// 函数名(实叁——实际参数); 
	sum(10, 20);
	sum(11.1, 20);
	
	
	return 0;
}

// 定义函数
// 大括里叫函数体
void sum(int number_1, int number_2)
{
	printf("sum =  %d\n", number_1 + number_2);
}
