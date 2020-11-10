/*
** EPITECH PROJECT, 2019
** .h
** File description:
** need4stek
*/

#ifndef N4S_H_
#define N4S_H_

#include <stdio.h>
#include <stdlib.h>

#define SEPARATOR ':'
#define LEFT_INDEX 4
#define RIGHT_INDEX 34
#define CENTER_INDEX 19
#define INDEX_TRACK 35
#define START_SIMULATION "START_SIMULATION\n"
#define TRACK_CLEARED "Track Cleared"
#define FINISH 1
#define STOP_SIMULATION "STOP_SIMULATION\n"
#define SPEED 0
#define DIR 1
#define FORWARD "CAR_FORWARD:0.5\n"
#define GET_DIST "GET_INFO_LIDAR\n"
#define SPEED_1 execution("CAR_FORWARD:", "0.9\n", 0)
#define SPEED_2 execution("CAR_FORWARD:", "0.7\n", 0)
#define SPEED_3 execution("CAR_FORWARD:", "0.6\n", 0)
#define SPEED_4 execution("CAR_FORWARD:", "0.5\n", 0)
#define SPEED_5 execution("CAR_FORWARD:", "0.4\n", 0)
#define SPEED_6 execution("CAR_FORWARD:", "0.3\n", 0)
#define SPEED_7 execution("CAR_FORWARD:", "0.3\n", 0)
#define SPEED_8 execution("CAR_FORWARD:", "0.2\n", 0)
#define SPEED_9 execution("CAR_FORWARD:", "0.2\n", 0)
#define SPEED_10 execution("CAR_FORWARD:", "0.1\n", 0)
#define SPEED_11 execution("CAR_FORWARD:", "0.1\n", 0)
#define SPEED_12 execution("CAR_FORWARD:", "0.05\n", 0)
#define DIRECTION_1(x) execution("WHEELS_DIR:", "0.005\n", x)
#define DIRECTION_2(x) execution("WHEELS_DIR:", "0.05\n", x)
#define DIRECTION_3(x) execution("WHEELS_DIR:", "0.1\n", x)
#define DIRECTION_4(x) execution("WHEELS_DIR:", "0.2\n", x)
#define DIRECTION_5(x) execution("WHEELS_DIR:", "0.3\n", x)
#define DIRECTION_6(x) execution("WHEELS_DIR:", "0.5\n", x)
#define DIRECTION_7(x) execution("WHEELS_DIR:", "0.7\n", x)
#define DIRECTION_8(x) execution("WHEELS_DIR:", "0.9\n", x)
#define STOP "CAR_FORWARD:0\n"

int     ai(void);
int     get_speed_dir(char **infos);
void    free_array(char **arr);

#endif /* N4S_H_ */
