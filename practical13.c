#include <stdio.h>
int main()
{
    int t;
    for(t=0;t<101;t=t+10)
    {
        printf("\nCurrent water level:%d",t);
    }
    if (t=100)
        printf(" Tank is full!!!!!");
}
