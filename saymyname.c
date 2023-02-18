#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    //char name[50] = "heisenberg";
    char name2[50] = "heisenberg";
    char name[50];
    printf("say my name!\n");
    //fgets(name, sizeof(name), stdin);
    // printf("%s", name);
    scanf("%s", name);

    do
    {

    if (strcmp(name, name2) == 0)
    {

    }
    else
    {
        printf("we all know exactly who i am say my name\n");
        scanf("%s", name);
    }
    if (strcmp(name, name2) == 0)
    {

    }
    else
    {
        printf("i'm the cook. i'm the man who killed gus fring\n");
        scanf("%s", name);
    }
    //return 0;
    }
    while(strcmp(name, name2) != 0);
    if (strcmp(name, name2) == 0)
    {
        printf("you're goddam right\n");
    }
}
