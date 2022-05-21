// 2022-05-19
// Mleon
// learn: pointers

#include <stdio.h>

int main(void)
{
    int client;
    
    int* p = &client;

    printf("&client = %p\n", &client);
    printf("p = %p\n", p);
	
    int* ptr = NULL;
    printf("ptr = %p\n", ptr);

	return 0;
}
