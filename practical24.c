#include <stdio.h>
#include <ctype.h>

int length(char s[]) {
    int i=0;
    while(s[i]!='\0') i++;
    return i;
}

void reverse(char s[]) {
    int i=0,j=length(s)-1;
    char t;
    while(i<j) {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++; j--;
    }
}

int compare(char a[], char b[]) {
    int i=0;
    while(a[i]!='\0' && b[i]!='\0') {
        if(a[i]!=b[i]) return 0;
        i++;
    }
    if(a[i]=='\0' && b[i]=='\0') return 1;
    return 0;
}

void copy(char src[], char dest[]) {
    int i=0;
    while(src[i]!='\0') {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}

void concat(char a[], char b[]) {
    int i=0,j=0;
    while(a[i]!='\0') i++;
    while(b[j]!='\0') {
        a[i]=b[j];
        i++; j++;
    }
    a[i]='\0';
}

void toUpper(char s[]) {
    int i=0;
    while(s[i]!='\0') {
        if(s[i]>='a' && s[i]<='z') s[i]-=32;
        i++;
    }
}

void toLower(char s[]) {
    int i=0;
    while(s[i]!='\0') {
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        i++;
    }
}

void capitalize(char s[]) {
    int i=0, newWord=1;
    while(s[i]!='\0') {
        if(newWord && s[i]>='a' && s[i]<='z') s[i]-=32;
        else if(!newWord && s[i]>='A' && s[i]<='Z') s[i]+=32;
        if(s[i]==' ') newWord=1; else newWord=0;
        i++;
    }
}

int main() {
    char note1[200], note2[200], copyNote[200];
    int ch;
    printf("Enter Note 1: ");
    gets(note1);
    printf("Enter Note 2: ");
    gets(note2);

    do {
        printf("\n1.Length\n2.Reverse\n3.Compare\n4.Copy\n5.Concatenate\n6.Upper Case\n7.Lower Case\n8.Capitalize\n9.Exit\nEnter choice: ");
        scanf("%d",&ch);
        getchar();
        switch(ch) {
            case 1: printf("Length: %d\n",length(note1)); break;
            case 2: reverse(note1); printf("Reversed: %s\n",note1); break;
            case 3: printf(compare(note1,note2)?"Same\n":"Different\n"); break;
            case 4: copy(note1,copyNote); printf("Copied: %s\n",copyNote); break;
            case 5: concat(note1,note2); printf("Concatenated: %s\n",note1); break;
            case 6: toUpper(note1); printf("Upper: %s\n",note1); break;
            case 7: toLower(note1); printf("Lower: %s\n",note1); break;
            case 8: capitalize(note1); printf("Capitalized: %s\n",note1); break;
        }
    } while(ch!=9);
    return 0;
}