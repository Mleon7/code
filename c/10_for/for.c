// 2022-05-17
// mleon
// learn: for

#include <stdio.h>
#define GOLD 100

int main(void)
{
	int rush;
	
	for(rush = 0; rush <= GOLD; rush++)
	{
		rush++;
		printf("rush = %d\n", rush);
	}
	
	printf("in the end, rush = %d\n", rush);
	
	return 0;
}
