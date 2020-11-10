/*
** EPITECH PROJECT, 2019
** ai
** File description:
** need4stek
*/

#include "n4s.h"
#include "my.h"

int run_ai(char *line)
{
    char **array = NULL;
    int ret = 0;

    line[my_strlen(line) - 1] = '\0';
    if ((array = str_to_word_array(line, SEPARATOR)) == NULL)
        return (84);
    free(line);
    if (my_tablen(array) - 1 >= INDEX_TRACK)
        if (my_strcmp(array[INDEX_TRACK], TRACK_CLEARED) == 1)
            return (FINISH);
    ret = get_speed_dir(array);
    if (ret == FINISH)
        return (FINISH);
    else if (ret == 84)
        return (84);
    free_array(array);
    return (0);
}

int	ai(void)
{
    char *line = NULL;
    int ret = 0;

    my_putstr(START_SIMULATION);
    while (1) {
        line = NULL;
        my_putstr(GET_DIST);
        if (getline(&line, &(size_t){0}, stdin) == EOF)
            return (0);
        ret = ret;
        if (my_strlen(line) > 1) {
            ret = run_ai(line);
            if (ret == FINISH)
                return (FINISH);
            else if (ret == 84)
                return (84);
        }
    }
    return (0);
}
