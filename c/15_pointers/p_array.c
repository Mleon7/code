// 2022-05-19 2022-05-21
// Mleon
// learn: array and pointers

#include <stdio.h>

int main(void)
{
//    int number = 99;
//    int* p_num = &number;
//    printf("&number: %p\n", &number);
//    // printf("number: %p\n", number);

    int array[5] = {1, 2, 3, 4, 5};
    int* p_arr = array;
    printf("&array: %p\n", &array);
    printf("array: %p\n", array);

    for (int i = 0; i < 5; i++)
    {
        printf("array[i] = %d\n", array[i]);
        printf("array[i]的地址： %p\n", &array[i]);
    }
     
    return 0;
}
