/*
** ETNA PROJECT, 17/03/2021 by Andrei Susai
** my_putstr
** File description:
**      Function that displays, one-by-one, the characters of a string
*/

void my_putstr(const char *str)
{

    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        ++i;
    }
}
