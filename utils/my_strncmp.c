/*
** EPITECH PROJECT, 2019
** need4stek
** File description:
** strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (s1 == NULL || s2 == NULL)
        return (0);
    else if (my_strlen(s1) < n || my_strlen(s2) < n)
        return (0);
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return (0);
    }
    return (1);
}

int my_strcmp(char const *str1, char const *str2)
{
    if (str1 == NULL || str2 == NULL)
        return (0);
    else if (my_strlen(str1) != my_strlen(str2))
        return (0);
    for (int i = 0; str1[i] && str2[i]; i++)
        if (str1[i] != str2[i])
            return (0);
    return (1);
}
