/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** my_putstr.c
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char str);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
