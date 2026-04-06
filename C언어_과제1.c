#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char c;
    int m;
    float f;

    c = 'h';
    m = 42;
    f = 23.4;

    printf("\n 1.출력: %c",&c);
    printf("\n 2.출력: %d",&m);
    printf("\n 3.출력: %5d",&m);
    printf("\n 4.출력: %x",&m);
    printf("\n 5.출력: %#4x",&m);
    printf("\n 6.출력: %f",&f);
    printf("\n 7.출력: %.3f",&f);
    printf("\n 8.출력: %e",f);

    return 0;
}