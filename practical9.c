#include <stdio.h>
int main()
{
    float amt, d, f;
    printf("shopping amount=");
    scanf("%f", &amt);
    if (amt <= 999)
    {
        printf("sooory no discount");
        d = 0;
    }

    else if (amt >= 999 && amt <= 4999)
    {
        printf("enjoys a 10 per discount hureeeeee");
        d = (10 * amt) / 100;
    }

    else
    {
        printf("enjoys a 25 per discount hureeeeee");
        d = (25 * amt) / 100;
    }
    f = amt - d;

    printf("\nfinal amount=");
    printf("%f", f);
}
