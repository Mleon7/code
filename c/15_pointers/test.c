// 2022-05-21
// Mleon
// leran: 函数传递指针参数

#include <stdio.h>

void exchange(int a, int b);
void exchange_address(int* a, int* b);


int main(void)
{
    int a = 2;
    int b = 5;
//    int* p_a;
//    int* p_b;
//    p_a = &a;
//    p_b = &b;

    printf("original: a = %d, b = %d\n", a, b);

    exchange(a, b);
    printf("in main, after exchange(a, b): a = %d, b = %d\n", a, b); 

    exchange_address(&a, &b);
    printf("in main, after exchang_address(&a, &b): a = %d, b = %d\n", a, b);
    
    return 0;
}

void exchange(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("in exchange: a = %d, b = %d\n", a, b);

    return;
}
void exchange_address(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("in exchange_address: *a = %d, *b = %d\n", *a, *b);

    return;
}
