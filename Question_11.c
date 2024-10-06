#include<stdio.h>
#include<string.h>

int main()
{
    int length, i;
    char string[100];
    
    printf("Enter string to check whether string is palindrome or not: ");
    gets(string);
    length = strlen(string);
    for (i = 0; i < length; i++)
        if (string[i] != string[length-1-i])
        {
            printf("Given string is not a palindrome.");
            exit(0);
        }
    printf("Given string is a palindrome\n");

    return 0;
}