/*
** EPITECH PROJECT, 2019
** All Days
** File description:
** my_find_prime_sup.c
*/

int my_find_prime_sup(int nb)
{
    if (nb < 0 || nb == 1) {
        return (my_find_prime_sup(nb + 1));
    }
    if (nb == 2) {
        return (2);
    }
    if (nb % 2 == 0) {
        return (my_find_prime_sup(nb + 1));
    }
    for (int count = 3; count * count <= nb; count = count + 2) {
        if (nb % count == 0) {
            return (my_find_prime_sup(nb + 1));
        }
    }
    return (nb);
}
