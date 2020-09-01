/*
** EPITECH PROJECT, 2019
** CPool_Day_2019_Task03
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
