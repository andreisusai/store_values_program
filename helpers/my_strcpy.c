/*
** ETNA PROJECT, 17/03/2021 by Andrei Susai
** my_strcpy
** File description:
**      Function that copies a string into another
*/
char *my_strcpy(char *dest, const char *src)
{

    char *start = dest;

    while (*src != '\0')
    {

        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return start;
}
