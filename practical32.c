#include <stdio.h>

int main() {
    FILE *fp;
    char ch, word[100];
    int i = 0;

    fp = fopen("Demo.txt", "r");
    if (fp == NULL)
    {
        printf("Error: File not found!\n");
        return 1;
    }

    while ((ch=fgetc(fp))!=EOF)
    {
        if (ch==' ' || ch=='\n' || ch=='\t')
        {
            for (int j=i-1 ;j>=0 ;j--)
                putchar(word[j]);
            i = 0;
            putchar(ch);
        }
        else
        {
            word[i++] = ch;
        }
    }
    for (int j = i - 1; j >= 0; j--)
    putchar(word[j]);

    fclose(fp);
    return 0;
}
