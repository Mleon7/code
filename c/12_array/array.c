// 2022-05-18
// Mleon
// learn: array

#include <stdio.h>
#define SIZE 5

int main(void)
{
	int test_1[SIZE] = {1, 2, 3};
	int test_2[SIZE];
//	test_2[2] = 99;
	int test_3[SIZE] = {};

	printf("test_1[SIZE] = {1, 2, 3};\n");
	for(int i = 0; i <= SIZE; i++)
	{
		printf("test_1[%d] = %d\n", i, test_1[i]);
	}
	printf("\n");

	printf("int test_2[SIZE];\n");
//	printf("test_2[2] = 99;\n");
	for(int i = 0; i <= SIZE; i++)
	{
		printf("test_2[%d] = %d\n", i, test_2[i]);
	}
	printf("\n");
		
	printf("int test_3[SIZE] = {};\n");
	for(int i = 0; i <= SIZE; i++)
	{
		printf("test_3[%d] = %d\n", i, test_3[i]);
	}
	printf("\n");
	
	return 0;
}
