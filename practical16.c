#include<stdio.h>
    int main()
{
        int a, b, c=21;
        printf("Total matchsticks= %d\n",c);
        /*for (int i=1; i<=4; i++)*/
        while(c>1)
    {
        printf("\nPick matchsticks 1 to 4: ");
        scanf("%d",&a);
        if(a>=5 || a==0)
        {
            printf("`````````````| Not valid no. |``````````````");
        }
        else
        {
        b=5-a;
            printf("Computer pick: %d\n",b);
        c=c-(a+b);
            printf("Remaining sticks: %d\n",c);
            printf("--------------------------------------------");
        }
    }
    if(c == 1)
    {
        printf("\n*************| You are loser |**************");
    }
        return 0;
 }
