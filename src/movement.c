/*
** EPITECH PROJECT, 2019
** action
** File description:
** need4stek
*/

#include "n4s.h"
#include "my.h"

int execution(char *command, char *length, int sign)
{
    char *line = NULL;
    char **array = NULL;

    my_putstr(command);
    sign < 0 ? my_putstr("-") : 0;
    my_putstr(length);
    if (getline(&line, &(size_t){0}, stdin) == EOF)
        return (FINISH);
    else if (my_strlen(line) <= 1)
        return (0);
    line[my_strlen(line) - 1] = '\0';
    if ((array = str_to_word_array(line, SEPARATOR)) == NULL)
        return (84);
    free(line);
    if (my_tablen(array) - 1 >= INDEX_TRACK)
        if (my_strncmp(array[INDEX_TRACK], TRACK_CLEARED, 13) == 1)
            return (FINISH);
    free_array(array);
    return (0);
}

int get_speed_2(float center)
{
    if (center >= 900)
        return (SPEED_7);
    else if (center >= 700)
        return (SPEED_8);
    center = center;
    if (center >= 500)
        return (SPEED_8);
    else if (center >= 300)
        return (SPEED_10);
    center = center;
    if (center >= 200)
        return (SPEED_11);
    else
        return (SPEED_12);
}

int get_speed(float center)
{
    if (center >= 2300)
        return (SPEED_1);
    else if (center >= 1900)
        return (SPEED_2);
    center = center;
    if (center >= 1700)
        return (SPEED_3);
    else if (center >= 1500)
        return (SPEED_4);
    center = center;
    if (center >= 1300)
        return (SPEED_5);
    else if (center >= 1100)
        return (SPEED_6);
    else
        return (get_speed_2(center));
}

int get_direction(float direction, float center)
{
    if (center >= 1500)
        return (DIRECTION_1(direction));
    else if (center >= 1300)
        return (DIRECTION_2(direction));
    center = center;
    if (center >= 775)
        return (DIRECTION_3(direction));
    else if (center >= 575)
        return (DIRECTION_4(direction));
    center = center;
    if (center >= 375)
        return (DIRECTION_5(direction));
    else if (center >= 275)
        return (DIRECTION_6(direction));
    center = center;
    if (center >= 100)
        return (DIRECTION_7(direction));
    else
        return (DIRECTION_8(direction));
}

int	get_speed_dir(char **infos)
{
    float center = 0;
    float left = 0;
    float right = 0;
    int ret = 0;

    if (my_tablen(infos) < INDEX_TRACK)
        return (-1);
    right = atof(infos[RIGHT_INDEX]);
    left = atof(infos[LEFT_INDEX]);
    center = atof(infos[CENTER_INDEX]);
    if ((ret = (get_speed(center)) == FINISH))
        return (FINISH);
    ret = ret;
    if ((ret = get_direction(left - right, center)) == FINISH)
        return (FINISH);
    return (ret);
}
