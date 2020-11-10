/*
** EPITECH PROJECT, 2019
** free_array
** File description:
** array
*/

#include "n4s.h"
#include "my.h"

void free_array(char **arr)
{
    if (!arr)
        return;
    for (int i = 0; arr[i]; i++)
        free(arr[i]);
    free(arr);
}
