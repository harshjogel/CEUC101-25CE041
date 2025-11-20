#include <stdio.h>

int main()  {
    float b,w,l;
    printf("enter weight=");
    scanf("%f",&w);
    printf("enter length=");
    scanf("%f",&l);
    b=w/(l*l);
    printf("BMI=");
    printf("%f",b);
}
