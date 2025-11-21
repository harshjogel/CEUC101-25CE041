#include <stdio.h>
union book
{
    char book_title[20];
    char author[20];
    int price;
    int flag;
};
int main ()
{
    union book b;
    scanf("%s",&b.book_title);printf(" book name %s\n",&b.book_title);
    scanf("%s",&b.author);printf(" writer:%s\n",&b.author);
    scanf("%d",&b.price);
    //scanf("%d",&b.flag);



    printf(" price:%d\n",b.price);
    printf(" book name %s\n",&b.book_title);
   // if (b.flag==1)
     //   printf("book is not avalable");
    //else
      //  printf("book is avalable");
}
