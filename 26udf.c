#include <stdio.h>
#include <math.h>

float calarea(float a, float b, float c)
{
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int validtri(float a,float b, float c)
{
    if (a<=0||b<=0||c<=0)
    {
        printf ("sides are negative");
        return 0;
    }
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        return 1;
    }
    else
        {
            printf("non velid tringle");
            return 0;
        }
}


int main ()
{
    float a,b,c;
 printf("Enter the sides\n");
    scanf("%f %f %f",&a,&b,&c);

    if (validtri(a, b, c))
    {
        float area = calarea(a, b, c);
        printf("Valids yes\nArea: %f\n", area);
    }
    else
    {
        printf("Valid Triangle: no\n");
    }

    return 0;
}

