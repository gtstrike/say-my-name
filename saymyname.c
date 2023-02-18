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
        printf("you're goddam right\n");
    }
    else
    {
        printf("we all know exactly who i am say my name\n");
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
