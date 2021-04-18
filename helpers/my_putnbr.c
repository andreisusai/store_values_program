/*
** ETNA PROJECT, 23/03/2021 by Andrei Susai
** my_putnbr
** File description:
**      
Function that displays the number given as a parameter. It must be able to display all the possible values of an int
*/

int get_div(long long n)
{
    int i = 0;
    int j = 0;
    long long division = 1;

    while (n >= 10)
    {
        n = n / 10;
        i++;
    }

    while (j < i)
    {
        division = division * 10;
        j++;
    }

    return division;
}

void my_putnbr(long long n)
{

    int check_negative;
    long long tmp;
    if (n < 0)
    {
        check_negative = -1;
        n = n * -1;
    }

    if (n < 10)
    {

        if (check_negative == -1)
        {
            my_putchar(45);
            check_negative = check_negative * -1;
        }
        my_putchar(n + 48);
    }

    long long division = get_div(n);

    while (n >= 10)
    {
        tmp = n / division;
        n = n % division;
        division = division / 10;

        if (check_negative == -1)
        {
            my_putchar(45);
            check_negative = check_negative * -1;
        }
        my_putchar(tmp + 48);

        if (n < 10)
        {
            my_putchar(n + 48);
        }
    }
}
