/*
** ETNA PROJECT, 22/03/2021 by Andrei Susai
** my_str_to_word_array
** File description:
**      Function that splits a string into words. Separators will all be space characters
*/

int word_count(const char *str)
{

    int i = 0;
    int words_number = 0;

    while (str[i] != '\0')
    {

        if (str[i] == ' ')
        {
            words_number++;
        }
        i++;
    }

    words_number++;

    return words_number;
}

char **my_str_to_word_array(const char *str)
{

    int n = 0;
    int i = 0;
    int j = 0;
    int words_number = word_count(str);
    char **new_str = malloc(sizeof(char *) * (words_number + 1));
    new_str[j] = malloc(sizeof(char) * (my_strlen(str, i) + 3));

    if (words_number == 1)
    {
        while (str[i] != '\0')
        {

            new_str[j][n] = str[i];
            n++;
            i++;
        }
        new_str[j][n] = '\0';
        j++;
        n = 0;
        new_str[j] = malloc(sizeof(char) * 1);
        return new_str;
    }
    else
    {

        new_str[j] = malloc(sizeof(char) * (my_strlen(str, i) + 3));

        while (str[i] != '\0')
        {
            if (str[i] != ' ')
            {
                new_str[j][n] = str[i];
                n++;
            }
            else
            {

                new_str[j][n] = '\0';
                j++;
                n = 0;
                new_str[j] = malloc(sizeof(char) * my_strlen(str, i));
            }
            i++;
        }
        return new_str;
    }
}
