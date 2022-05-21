// 2022-05-18
// Mleon
// learn: 函数作用域；局部变量，全局变量。

#include <stdio.h>

void function(int number);
// 全局变量
// 类比：不属于任何国家，属于地球上的。
int sun_flower = 100;
int main(void)
{
	int sun_flower_beijing = 0;
  
	printf("main_sun_flower = %d\n", sun_flower);

	function(0);	
    
  return 0;
}

void function(int number)
{
	// 不能调用sun_flower_beijing
	// printf("sun_flower_beijing = %d\n", sun_flower_main);
	// 只能自己定义一个
	int sun_flower_shanghai;
	// 使用全局变量
	printf("function_sun_flower = %d\n", sun_flower);
}
