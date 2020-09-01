/*
** EPITECH PROJECT, 2019
** All Days
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    if (nb == 1)
        return (1);

    float sqrt;
    float temp = 0;
    sqrt = nb / 2;

    if (nb <= 0)
        return (0);
    while (sqrt != temp) {
        temp = sqrt;
        sqrt = (nb / temp + temp) / 2;
    }

    int f = (int) sqrt;

    if (f != sqrt)
        f = 0;
    return (f);
}
