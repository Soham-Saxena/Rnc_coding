#include<stdio.h>
#include<string.h>

int main()
{
    int s_length, sublength, i, j, found;
    char string[100], substring[25];

    printf("Enter string: ");
    gets(string);
    printf("Enter substring to find: ");
    gets(substring);
    
    s_length = strlen(string);
    sublength = strlen(substring);

    printf("Length of string: %d\nLength of substring: %d\n", s_length, sublength);

    for (i = 0; i < s_length - sublength; i++)
        {
            if (string[i] == substring[0])
            {
                found = 1;
                for (j = 0; j < sublength; j++)
                {
                    if (string[j+i] != substring[j])
                    {
                        found = 0;
                        break;
                    }
                }
                if (found == 1)
                {
                    break;
                }
            }
        }
    
    if (found != 1)
    {
        printf("Substring not found within string.");
    }
    else
        printf("Substring found at index: %d\n", i + 1);
        for (j = 0; j < s_length - sublength; j++)
        {
            string[i + j] = string[i + j + sublength];
        }
        printf("string after deleting substring:\n");
        puts(string);
    
    return 0;
}