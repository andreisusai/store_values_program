/*
** ETNA PROJECT, 27/03/2021 by Andrei Susai
** my.h
** File description:
**      Header file used to build the library 
*/

#include "../helpers/my_getnbr.c"
#include "../helpers/my_putchar.c"
#include "../helpers/my_putstr.c"
#include "../helpers/my_strlen.c"
#include "../helpers/my_str_to_word_array.c"
#include "../helpers/my_putnbr.c"
#include "../helpers/my_readline.c"
#include "../helpers/my_strcpy.c"

void my_putchar(char c);
void my_putstr(const char *str);
int my_strlen(const char *str, int i);
int my_getnbr(const char *str);
void my_putnbr(long long nb);
char *my_strcpy(char *dest, const char *src);
char **my_str_to_word_array(const char *str);
char *my_readline(void);
