// 2022-05-15
// mleon
// learn: if

#include <stdio.h>

int main(void)
{
	int age;
	int score;
	int IQ;	

	printf("please input your age : \n");
	scanf("%d", &age);

	printf("please input your score : \n");
	scanf("%d", &score);

	printf("please input your IQ : \n");
	scanf("%d", &IQ);

	if((age >= 18) && (score > 90 || IQ > 120)){
		printf("已成年，且成绩大于90或IQ大于120，可以玩游戏了\n");
	} else {
		printf("不满足条件\n");
	}

	return 0;
}
