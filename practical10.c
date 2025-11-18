#include <stdio.h>
int main()
{
    int bur,pizza,pass,sand,ff,ch;
    printf("1. Burger 150 \n2. Pizza 200 \n3. Pasta 120 \n4. Sandwich 100 \n5. FrenchFries 80\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: bur=150;
            printf("bur=%d",bur);
            break;
        case 2: pizza=200;
            printf("pizza=%d",pizza);
            break;
        case 3: pass=120;
            printf("pass=%d",pass);
            break;
        case 4: sand=100;
            printf("sand=%d",sand);
            break;
        case 5: ff=80;
            printf("franch frice=%d",ff);
            break;
        default:printf("invalid");
    }
}
