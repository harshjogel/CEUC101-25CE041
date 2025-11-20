#include <stdio.h>
#include <unistd.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=n;i>=1;i--)
    {
        printf("%d\n",i);
        sleep(1);
    }
    printf("GO\n");
}
