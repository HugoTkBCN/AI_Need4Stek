/*
** EPITECH PROJECT, 2019
** minishell
** File description:
** separate a string in an array
*/
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>

int count_words(char *str, char s_c)
{
    int words = 0;
    int check = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != s_c && check == 0 && str[i] != '\n' && str[i] != '\t') {
            check = 1;
            words++;
        }
        else if (str[i] == s_c && check == 1) {
            check = 0;
        }
    }
    return (words);
}

char **str_to_word_array(char *str, char s_c)
{
    int words = count_words(str, s_c);
    int x = 0;
    int y = 0;
    char **arr = malloc(sizeof(char *) * (words + 1));

    for (int i = 0; i < words; i++)
        arr[i] = malloc(sizeof(char) * (strlen(str) + 1));
    for (int  i = 0; str[i] != '\0'; i++) {
        if (str[i] == s_c && str[i + 1] != s_c && x != 0) {
            arr[y][x] = '\0';
            x = 0;
            y++;
        } else if (str[i] != s_c && str[i] != '\n' && str[i] != '\t') {
            arr[y][x] = str[i];
            x++;
        }
    }
    arr[y][x] = '\0';
    arr[y + 1] = NULL;
    return (arr);
}
