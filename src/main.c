/*
** EPITECH PROJECT, 2019
** main
** File description:
** need4stek
*/

#include "n4s.h"
#include "my.h"

int usage(void)
{
    my_putstr("The n4s binary enables communication with V-REP ");
    my_putstr(" (via a socket in C)");
    my_putstr(" and ctrls the elements that we have put in our scene.\n");
    my_putstr("It reads the cmds sent to it on the std input, carries out");
    my_putstr(" the task, and responds by writing on the standard output.\n\n");
    my_putstr("Your binary should, therefore, do the opposite: give off");
    my_putstr("its commands by writing on the");
    my_putstr("std output and receive the n4s responses by reading them on");
    my_putstr("your standard input.\n\n");
    my_putstr("The cmd in the pipes.sh script enables you to correctly link");
    my_putstr("the different binaries.\n\nYou'll need to execute");
    my_putstr("the pipes.sh script in order to launch the simulation");
    my_putstr("and see how it interacts with your AI.\n");
    return (0);
}

int main(int ac, char **av)
{
    int ret = 0;

    if (ac == 2)
        if ((av[1][0] ==  '-' && av[1][1] == 'h') ||
            (my_strcmp("--help", av[1])))
            return (usage());
    ret = ai();
    my_putstr(STOP_SIMULATION);
    return (ret == 84 ? 84 : 0);
}
