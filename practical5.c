#include <stdio.h>
#include <limits.h>
#include <float.h>

int main ()
{
    float p=1441981744,men;
    men=(51.6*p)/100;
    printf("total number of men=");
    printf("%f",men);
    float women;
    women=(48.4*p)/100;
    printf("\ntotal number of women=");
    printf("%f",women);
    float ilmen;
    ilmen=(80.95*men)/100;
    printf("\ntotal number of ilmen=");
    printf("%f",ilmen);
    float ilwomen;
    ilwomen=(62.84*women)/100;
    printf("\ntotal number of ilwomen=");
    printf("%f",ilwomen);
}
