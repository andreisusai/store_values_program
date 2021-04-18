/*
** ETNA PROJECT, 25/03/2021 by Andrei Susai
** my_list.h
** File description:
**      Functions for typedef struct linked_list_s
*/
#ifndef STRUCT_H
#define STRUCT_H

typedef struct linked_list_s
{

    long long key;
    long long value;
    struct linked_list_s *next;

} linked_list_t;

#endif

linked_list_t *my_push_front_to_list(long long key, long long value, linked_list_t *list)
{

    linked_list_t *tmp = malloc(sizeof(linked_list_t));
    tmp->key = key;
    tmp->value = value;
    tmp->next = list;

    return tmp;
}

linked_list_t *my_push_back_to_list(long long key, long long value, linked_list_t *list)
{

    linked_list_t *last = malloc(sizeof(linked_list_t));
    linked_list_t *new_node = malloc(sizeof(linked_list_t));

    last = list;
    new_node->key = key;
    new_node->value = value;
    new_node->next = NULL;

    if (list == NULL)
    {
        list = new_node;
        return list;
    }

    while (last->next != NULL)
    {

        last = last->next;
    }

    last->next = new_node;
    last = last->next;

    return list;
}

linked_list_t *my_find_node(linked_list_t *list, const int key)
{

    linked_list_t *current = malloc(sizeof(linked_list_t));
    current = list;

    while (current != NULL)
    {
        if (current->key == key)
        {
            return current;
        }
        current = current->next;
    }

    return NULL;
}

void my_delete_nodes(linked_list_t **list, const long long data_ref)
{

    linked_list_t *temp;

    if ((*list)->key == data_ref)
    {
        temp = *list;
        *list = (*list)->next;
        free(temp);
    }

    else
    {

        linked_list_t *current = *list;
        while (current->next != NULL)
        {
            if (current->next->key == data_ref)
            {
                temp = current->next;

                current->next = current->next->next;
                free(temp);
                break;
            }

            else
                current = current->next;
        }
    }
}

linked_list_t *my_sort_key_values(char *line, linked_list_t *list)
{

    char **key_value;
    int check_string;
    char *delete = "D";
    linked_list_t *find_node = malloc(sizeof(linked_list_t));
    key_value = my_str_to_word_array(line);
    long long key = 0;
    long long value = 0;
    int count = word_count(line);
    key = my_getnbr(key_value[0]);
    value = my_getnbr(key_value[1]);
    check_string = strcmp(key_value[1], delete);

    free(key_value);
    // Check for inserting values
    if (count == 2 && check_string != 0 && key != -1 && value != -1 && key >= 0 && key >= 0)
    {

        if (list == NULL)
        {
            list = my_push_front_to_list(key, value, list);
            my_putnbr(key);
            my_putchar('\n');
        }
        else
        {

            find_node = my_find_node(list, key);
            if (find_node != NULL)
            {
                list->value = value;
                my_putnbr(list->key);
                my_putchar('\n');
            }
            else
            {
                list = my_push_front_to_list(key, value, list);
                my_putnbr(key);
                my_putchar('\n');
            }
        }
    }
    // Check for delete values
    else if (count == 2 && check_string == 0)
    {

        if (list != NULL)
        {
            find_node = my_find_node(list, key);
            if (find_node != NULL)
            {
                my_putnbr(find_node->value);
                my_putchar('\n');
            }
            my_delete_nodes(&list, key);
        }
        else
        {
            if (list == NULL)
            {
                my_putnbr(-1);
                my_putchar('\n');
            }
        }
    }
    //Search if key exists
    else if (count == 1 && key >= 0)
    {
        if (list == NULL)
        {
            my_putnbr(-1);
            my_putchar('\n');
        }
        else
        {

            find_node = my_find_node(list, key);
            if (find_node != NULL)
            {
                my_putnbr(find_node->value);
                my_putchar('\n');
            }
            else
            {

                my_putnbr(-1);
                my_putchar('\n');
            }
        }
    }
    else if (count >= 2 && value < 0)
    {

        my_putnbr(-1);
        my_putchar('\n');
    }
    else if (count == 1 && key < 0)
    {

        my_putnbr(-1);
        my_putchar('\n');
    }
    else if (count > 1 && key < 0)
    {

        my_putnbr(-1);
        my_putchar('\n');
    }
    return list;
}
