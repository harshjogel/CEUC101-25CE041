#include <stdio.h>
int main ()
{
    int A[10],p=0,n=0,o=0,e=0,i;
    for (i=0;i<10;i++)
    {
    scanf("%d",&A[i]);


    if (A[i]<0)
    {
        n++;

    }
    if (A[i]>0)
    {
        p++;


    }
    if (A[i]%2==0)
    {
        e++;

    }
    else
    {
       o++;

    }
    }
    printf("-ve Numbers %d\n",n);
    printf("+ve Numbers %d\n",p);
    printf("even Numbers %d\n",e);
    printf("odd Number %d\n",o);
}


