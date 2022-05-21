// 2022-05-16
// mleon
// learn: switch

#include <stdio.h>

int main(void)
{
	unsigned age;
	
	printf("please input your age(type int): \n");
	int result = scanf("%u", &age);
	if (result == 0){
		printf("你输入的数据不合法！\n");
		return 0;
	}

	switch(age){
		case(40):
			printf("恭喜你中奖了！四十岁大礼包！送房子一个！\n");
			break;

		case(50):
			printf("恭喜你中奖了！五十岁大礼包！送苹果一个！\n");
			break;

		case(70):
			printf("该退休了！\n");
			break;
		
		default:
			printf("没有找到符合你的年齡！\n");	
			break;
	}

	return 0;
}
