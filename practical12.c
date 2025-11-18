#include <stdio.h>
int main()
{
    int nb;
    for(nb=1;nb<51;nb++)
    {
        if (nb%5==0)
        {
        printf("\nsp. book id=%d",nb);
        }
    else
    {
        printf("\nbook id=%d",nb);
    }
}
}
