/*
** ETNA PROJECT, 30/03/2021 by Andrei Susai
** Entry point for my_crd
** File description:
**      Program to allow storing, deleting and retrieving values associated with keys.
*/

#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "include/my.h"
#include "include/my_list.h"

int main(){

    char *line;
    line = my_readline();
    
    linked_list_t *list = NULL;    
    while(line != NULL){
        list = my_sort_key_values(line, list);
        line = my_readline();
        }

     return(0);
}
