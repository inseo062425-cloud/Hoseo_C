#include <stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("학번:20253028, 이름:정인서, 소속:호서대학교 전자공학과");

    char a = CHAR_MAX;
    unsigned char b = UCHAR_MAX;
    short int c = SHRT_MAX;
    unsigned short int d = USHRT_MAX;
    int e = INT_MAX;
    unsigned int f = UINT_MAX;
    long int g = LONG_MAX;
    unsigned long int h = ULONG_MAX;
    float i = FLT_MAX;
    double j = DBL_MAX;
    long double k = LDBL_MAX;
  
    printf("\n[0] char byte 크기: %d / min:%d / max:%d",sizeof(a),CHAR_MIN,CHAR_MAX);
    printf("\n[1] unsigned char byte 크기: %d / min:%d / max:%d",sizeof(b),0,UCHAR_MAX);
    printf("\n[2] short int byte 크기: %d / min:%d / max:%d",sizeof(c),SHRT_MIN,SHRT_MAX);
    printf("\n[3] unsigned short int byte 크기: %d / min:%d / max:%d",sizeof(d),0,USHRT_MAX);
    printf("\n[4] int byte 크기: %d / min:%d / max:%d",sizeof(e),INT_MIN,INT_MAX);
    printf("\n[5] unsigned int byte 크기: %d / min:%d / max:%d",sizeof(f),0,UINT_MAX);
    printf("\n[6] long int byte 크기: %d / min:%d / max:%d",sizeof(g),LONG_MIN,LONG_MAX);
    printf("\n[7] unsigned long int byte 크기: %d / min:%d / max:%d",sizeof(h),0,ULONG_MAX);
    printf("\n[8] float byte 크기: %d / min:%f / max:%f",sizeof(i),FLT_MIN,FLT_MAX);
    printf("\n[9] double byte 크기: %d / min:%f / max:%f",sizeof(j),DBL_MIN,DBL_MAX);
    printf("\n[10] long double byte 크기: %d / min:%Lf / max:%Lf",sizeof(k),LDBL_MIN,LDBL_MAX);

    return 0;
}
