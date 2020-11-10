/*
** EPITECH PROJECT, 2019
** tab len
** File description:
** utils
*/

#include "my.h"

int my_tablen(char **array)
{
    int len = 0;

    if (array == NULL)
        return (-1);
    while (array[len])
        len++;
    return (len);
}
