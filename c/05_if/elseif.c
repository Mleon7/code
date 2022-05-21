// 2022-05-15
// mleon
// learn: else if

#include <stdio.h>

int main(void)
{
	unsigned int age;
	
	printf("please input your age: \n");
	scanf("%d", &age);

	if (age > 100) {
		printf("高寿\n");
	} else if (age > 75) {
		printf("老年\n");
	} else if (age > 30) {
		printf("中年\n");
	} else if (age > 18) {
		printf("成年\n");
	} else {
		printf("小屁孩\n");
	}

	return 0;
}
