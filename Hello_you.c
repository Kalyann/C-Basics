#include<stdio.h>
int main()
{
 char name[20];//string declared with maximum length 20
 printf("Enter your first name \n");
 scanf("%s", name);//takes in standard input and stores it in name string
 printf("Hello %s", name);
 return 0;
}
