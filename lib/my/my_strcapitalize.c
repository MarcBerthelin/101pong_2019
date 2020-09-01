/*
** EPITECH PROJECT, 2019
** All Days
** File description:
** my_strcapitalize.c
*/

char which_letter(char *str, int i)
{
    if (str[i - 1] > 64 && str[i - 1] < 91)
        return (str[i]);
    if (str[i - 1] > 96 && str[i - 1] < 123)
        return (str[i]);
    if (str[i - 1] > 47 && str[i - 1] < 58)
        return (str[i]);
    str[i] = str[i] - 32;
    return str[i];
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91)
            str[i] = str[i] + 32;
        if (str[i] > 96 && str[i] < 123)
            which_letter(str, i);
        i++;
    }
    return (0);
}
