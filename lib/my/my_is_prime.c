/*
** EPITECH PROJECT, 2019
** All Days
** File description:
** my_is_prime.c
*/

int my_is_prime(int nb)
{
    if (nb < 0 || nb == 1)
        return (0);
    if (nb == 2)
        return (1);
    if (nb % 2 == 0)
        return (0);
    for (int count = 3; count * count <= nb; count = count + 2) {
        if (nb % count == 0) {
            return (0);
        }
    }
    return (1);
}
