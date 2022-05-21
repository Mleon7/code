// 2022-05-17
// mleon
// learn: while

#include <stdio.h>
#define GOLD 100

int main(void)
{
	int rush = 0;

	while(rush <= GOLD)
	{
		printf("rush = %d\n", rush);
		rush++;
	}
	
	printf("in the end, rush = %d\n", rush);

	return 0;
}
