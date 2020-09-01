/*
** EPITECH PROJECT, 2019
** Project 101pong
** File description:
** 101pong.c
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int calc(int x0, int x1, int y1, int z1)
{
    x1 += vx * n;
    y1 += vy * n;
    z1 += vz * n;
    printf("At time t + "+ t +", ball coordinates will be:");
    printf("(%.2f" %x1+ ", %.2f" %y1+ ", %.2f)" %z1);
    if (sys.argv[6][0] == '-' and vz < 0 or sys.argv[6][0] != '-' and vz > 0)
        printf("The ball wont reach the paddle");
    else {
        x1 -= x0;
        y1 -= y0;
        z1 -= z0;
        x1 = sqrt(x1 * x1 + y1 * y1 + z1 * z1);
        x0 = sqrt(z1 * z1);
        x1 = degrees(asin(x0 / x1));
        printf("The incidence angle is:");
        printf("%.2f" %x1 + " degrees");
    }
}

int velocity(int ac, char *av)
{
    char *endPtr;
    float x0 = strtof(av[1], &endPtr);
    float y0 = strtof(av[2], &endPtr);
    float z0 = strtof(av[3], &endPtr);
    float x1 = strtof(av[4], &endPtr);
    float y1 = strtof(av[5], &endPtr);
    float z1 = strtof(av[6], &endPtr);
    int n = atoi(av[7]);

    t = (sys.argv[7]);
    vx = x1 - x0;
    vy = y1 - y0;
    vz = z1 - z0;

    printf("The velocity vector of the ball is:");
    printf("(%.2f" %vx+ ", %.2f" %vy+ ", %.2f)" %vz);
    calc(x0, x1, y1, z1);
}

void help(void) 
{
        printf("USAGE");
        printf("    ./101pong x0 y0 z0 x1 y1 z1 n");
        printf("\n" "DESCRIPTION");
        printf("    x0 ball abscissa at time t - 1");
        printf("    y0 ball ordinate at time t - 1");
        printf("    z0 ball altitude at time t - 1");
        printf("    x1 ball abscissa at time t");
        printf("    y1 ball ordinate at time t");
        printf("    z1 ball altitude at time t");
        printf("    n time shift (greater than or equal to zero, integer)");
}

int main(char ac, char const *av)
{
    char *endPtr;

    if (av[1] == "-h") {
        help;
        return (0);
    }
    else {
        velocity(ac, av);
    }
}
