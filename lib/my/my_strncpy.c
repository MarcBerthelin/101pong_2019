/*
** EPITECH PROJECT, 2019
** All Days
** File description:
** my_strncpy.c
*/

void my_copyn(char *dest, char const *src, int n)
{
    int i = 0;
    int j = 0;

    while (src[j] != '\0')
        j++;
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    if (j > n)
        dest[i] = '\0';
}

char *my_strncpy(char *dest, char const *src, int n)
{
    my_copyn(dest, src, n);
    return (dest);
}
