#include <stdio.h>
int main ()
{
    int s=0,t,abs,n;
    printf("enter a student:");
    scanf("%d",&n);
    int A[n-1];
    for (int i=0;i<n-1;i++)
    {
        scanf("%d",&A[i]);
        s=s+A[i];
    }
    t=(n*(n+1))/2;
    abs=t-s;
    printf("Absent number:%d",abs);
}

