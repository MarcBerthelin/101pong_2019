/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019_Task04
** File description:
** my_compute_power_rec.c
*/

int my_compute_power_rec (int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    nb = my_compute_power_rec(nb, p-1) * nb;
    return (nb);
}
