#include <stdio.h>
int main()
{
    int m,g;
    printf("enter your marks=");
    scanf("%d",&m);
    g=(m>100)?'X':(m>90)?'A':(m>80)?'B':(m>70)?'C':(m>60)?'D':'F';
    printf("grade=%c",g);
}
