/*
** ETNA PROJECT, 02/04/2021 by Andrei Susai
** my_readline
** File description:
**      Read line from .lst file
*/
char *my_readline(void)
{
  size_t n = 0;
  char *ret = NULL;
  ssize_t result = getline(&ret, &n, stdin);

  if (result <= 0)
  {
    free(ret);
    return NULL;
  }
  if (ret[result - 1] == '\n')
  {
    ret[result - 1] = '\0';
  }
  return ret;
}
