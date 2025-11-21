
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter the number of months: ");
    scanf("%d",&n);
    if (n>=1)
    {
        printf("Month 1: %d\n", first);
    }

    if (n>=2)
    {
        printf("Month 2: %d\n", second);
    }

    for (int i=3;i<=n;i++)
    {
        next = first + second;
        printf("Month %d: %d\n", i, next);
        first = second;
        second = next;
    }

    return 0;
}
