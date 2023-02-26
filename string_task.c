#include <stdio.h>

void lower(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

void delete_vowels(char *str)
{
    int i = 0;
    int j = 0;
    char string[255] = {0};
    while (str[i])
    {
        if (str[i] != 'a' && str[i] != 'o'&& str[i] != 'y'
        && str[i] != 'e'&& str[i] != 'u'&& str[i] != 'i')
        {
            string[j] = str[i];
            j++;
        }
        i++;
    }
    i = 0;
    while (string[i])
    {
        printf(".");
        if (string[i] >= 'a' && string[i] <= 'z')
            printf("%c", string[i]);
        if (string[i + 1] == 0)
            break;
        i++;
    }
}

int main(void)
{
    char string[255] = {0};
    scanf("%s", string);
    lower(string);
    delete_vowels(string);
    return (0);
}