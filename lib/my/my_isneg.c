/*
** EPITECH PROJECT, 2019
** CPool_Day_2019_task04
** File description:
** my_isneg.c
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char str);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar(80);
    else
        my_putchar(78);
    return (0);
}
