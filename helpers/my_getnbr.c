/*
** ETNA PROJECT, 17/03/2021 by Andrei Susai
** my_getnbr
** File description:
**      Function that parses a number from a string representation taken as parameter and returns it
*/

int my_getnbr(const char *str)
{

    int i = 0;
    long long n = 0;
    int count = 0;
    int check_negative = 0;

    while (str[i] != '\0')
    {

        if ((str[i] > 47) && (str[i] < 58))
        {

            n = n * 10 + (str[i] - 48);
            count++;
        }

        if (((count != 0) && (str[i] < 47)) || ((count != 0) && (str[i] > 57)))
        {
            break;
        }
        i++;
    }

    if (check_negative == -1)
    {
        return (n * -1);
    }
    else
    {
        if (count > 0)
        {
            return n;
        }
        else
        {
            return -1;
        }
    }
}
