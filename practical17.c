#include<stdio.h>
int main()
{
    float d;
    int t;
    for (d=0.5,t=1;d<=10,t<21;d=d+0.5,t++)

        printf("\nMinute %d Distance covered = %.1f km",t,d);
}
