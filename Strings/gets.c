//Using gets() function

#include<stdio.h>
int main()
{
    char str[50];   // char array of size 50
    printf("Enter your complete name:\n");

    gets(str);
    printf("Name: %s\nx", str);
    return 0;
}