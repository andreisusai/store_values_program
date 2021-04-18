/*
** ETNA PROJECT, 22/03/2021 by Andrei Susai
** my_strlen
** File description:
**      Function that counts the chars in an inseparate by space string (word)
*/

int my_strlen(const char *str, int i)
{

    int counter = 0;

    while (str[i] == ' ' || str[i] == '\0')
    {

        counter++;
        i++;
    }

    return counter;
}
