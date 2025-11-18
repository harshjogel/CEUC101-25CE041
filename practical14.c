#include <stdio.h>
int main()
{
    int b=5000,w;
    char choice;
    printf("your belance=%d\n",b);
    do
    {
    printf("enter your amount=");
    scanf("%d",&w);
    if(w<=b)
    {
        b=b-w;
        printf("remain belence=%d");
    }
    else if(b<0)
    {
        printf("please enter +ve value");
    }
    else
    {
        printf("invalid");
    }
    printf("\nyou want more");
    scanf("%c",&choice);
    }while(choice=='y' || choice=='Y');
}
