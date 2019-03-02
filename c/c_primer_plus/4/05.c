//使用limit.h和float.h头文件里定义的明示常量
#include <stdio.h>
#include <limits.h>  // 整数限制
#include <float.h>  // 浮点型限制

int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("float precision=%d digits\n", FLT_DIG);
    printf("Smallest normal float:%e\n", FLT_MIN);
    printf("float epsilon = %e\n", FLT_EPSILON);
    return 0;
}

