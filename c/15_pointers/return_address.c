// 2022-05-21
// Mleon
// learn: 函数返回指针

#include <stdio.h>
#include <string.h>

char* strlong(char* str1, char* str2);

int main(void)
{
    char str1[30] = "\0";
    char str2[30] = "\0";
    char* str = "\0";
    
    printf("main, before : str1 address: %p\n", str1);
    printf("main, before : str2 address: %p\n", str2);
    printf("main, before : str address: %p\n", str);

    fgets(str1, 30, stdin);
    fgets(str2, 30, stdin);

    str = strlong(str1, str2);
    printf("main, after : str1 address: %p\n", str1);
    printf("main, after : str2 address: %p\n", str2);
    printf("main, after : str address: %p\n", str);
    printf("longer str = %s\n", str);
    
    return 0;
}

char* strlong(char* str1, char* str2)
{
    if (strlen(str1) >= strlen(str2)) {
        printf("strlong: str1 address: %p\n", str1);
        printf("strlong: str2 address: %p\n", str2);
        return str1;
    } else {
        printf("strlong: str1 address: %p\n", str1);
        printf("strlong: str2 address: %p\n", str2);
        return str2;
    }
}
