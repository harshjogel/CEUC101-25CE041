#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Data Type Information:\n\n");

    printf("char:\n");
    printf("Size: %lu bytes\n", sizeof(char));
    printf("Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    printf("unsigned char:\n");
    printf("Size: %lu bytes\n", sizeof(unsigned char));
    printf("Range: 0 to %u\n\n", UCHAR_MAX);

    printf("int:\n");
    printf("Size: %lu bytes\n", sizeof(int));
    printf("Range: %d to %d\n\n", INT_MIN, INT_MAX);

    printf("unsigned int:\n");
    printf("Size: %lu bytes\n", sizeof(unsigned int));
    printf("Range: 0 to %u\n\n", UINT_MAX);

    printf("short:\n");
    printf("Size: %lu bytes\n", sizeof(short));
    printf("Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);

    printf("unsigned short:\n");
    printf("Size: %lu bytes\n", sizeof(unsigned short));
    printf("Range: 0 to %u\n\n", USHRT_MAX);

    printf("long:\n");
    printf("Size: %lu bytes\n", sizeof(long));
    printf("Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    printf("unsigned long:\n");
    printf("Size: %lu bytes\n", sizeof(unsigned long));
    printf("Range: 0 to %lu\n\n", ULONG_MAX);

    printf("float:\n");
    printf("Size: %lu bytes\n", sizeof(float));
    printf("Range: %e to %e\n\n", FLT_MIN, FLT_MAX);

    printf("double:\n");
    printf("Size: %lu bytes\n", sizeof(double));
    printf("Range: %e to %e\n\n", DBL_MIN, DBL_MAX);

    printf("long double:\n");
    printf("Size: %lu bytes\n", sizeof(long double));
    printf("Range: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
