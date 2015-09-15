#include<stdio.h>
int main()
{
char name[20];
int age;
printf("What is your first name?\n");
scanf("%s", name);
printf("Hello %s \nHow old are you?\n", name);
scanf("%d", &age);
printf("Nice meeting you %s \nBye, see you soon", name);
return 0;
}
