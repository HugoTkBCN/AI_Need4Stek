/*
** EPITECH PROJECT, 2019
** utils
** File description:
** .h
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>

void my_putchar(char c);
void my_put_nbr(int nb);
int my_strlen(const char *str);
void my_putstr(const char *str);
int my_tablen(char **tab);
char *my_strcpy(char *dest, char *src);
char *my_strdup(char *str);
char **str_to_word_array(char *, char);
int my_strcmp(char const *str1, char const *str2);
int my_strncmp(char const *str1, char const *str2, int n);

#endif /* !MY_H_ */
