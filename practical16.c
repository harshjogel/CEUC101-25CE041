#include <stdio.h>
int main()
{
    int s=21,y,c;
     printf("total 21 stick");
    do
    {

    printf("\npick stick in 1-4\n");
    scanf("%d",&y);
    if(y<=0 || y>4)
        {
            printf("invalid choice");
        }
        else
        {
    s=s-y;

    c=5-y;
    printf("%d",c);
    s=s-c;
    printf("\nremain stick=%d",s);
        }
    }while(s>1);
    printf("\nwasted");
}
