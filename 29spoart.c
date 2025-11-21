#include <stdio.h>
struct coach
    {
        char name[50];
        int age;
        int years_of_experience;
    };
struct team
{
    char team_name[50];
    struct coach info;
    char sport_name[50];
};
int main ()
{
    struct team t;

    printf("enter team name");
    scanf("%s",&t.team_name);
    printf("team name %s\n",&t.team_name);

    printf("enter his name");
    scanf("%s",&t.info.name);
    printf("coach is mr:%s\n",&t.info.name);

    printf("enter his age");
    scanf("%s",&t.info.age);
    printf("coach age :%s\n",&t.info.age);

    printf("enter coach experience");
    scanf("%s",&t.info.years_of_experience);
    printf("his experience:%s\n",&t.info.years_of_experience);

    printf("enter sport name");
    scanf("%s",&t.sport_name);
    printf("game:%s\n",&t.sport_name);
}
