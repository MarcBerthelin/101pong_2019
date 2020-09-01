/*
** EPITECH PROJECT, 2019
** All Days
** File description:
** my_strlowcase.c
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91)
            str[i] = (str[i] + 32);
        i++;
    }
    return (0);
}
