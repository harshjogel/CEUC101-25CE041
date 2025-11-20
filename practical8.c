#include <stdio.h>
int main ()
{
printf("\n=========The National Bank Of India==========\n");
int total = 5000,choise,wd,pin,npin,dp;

while (1)
{
    printf("1.withdraw money\n2.Deposite\n3.exist\n4.Set Pin\n");
    printf("Enter Your Choise\n");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
    printf("Enter value To Withdraw: ");
    scanf("%d",&wd);

    printf("Enter Your Pin : ");
    scanf("%d",&pin);
    if (pin == npin)
    {

    if (wd>total)
    {
     printf("insufficent balance\n");
    }

    else
    {
        total-=wd;
        printf("Withdrawed : %d\n",wd);
        printf("Balance : %d\n",total);
    }
    break;
}
else
{
    printf("Enter right pin\n");
    break;
}
    case 2:
        printf("Enter value of Deposite : ");
        scanf("%d",&dp);
        printf("Enter Your Pin : ");
        scanf("%d",&pin);
        if(pin == npin)
        {
        total+=dp;
        printf("Your Balance is : %d\n",total);

    break;
}
else
{
 printf("Enter right pin\n");
    break;
}

    case 3:
    printf("Exited Withdraw\n");
    return 0 ;

    case 4:
    printf("Enter Your New Pin:");
    scanf("%d",&npin);
    pin == npin;
    }

}

}
