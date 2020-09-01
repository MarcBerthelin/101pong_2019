/*
** EPITECH PROJECT, 2019
** task01 my_swap
** File description:
** my_swap.c
*/

void my_swap(int *a, int *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}
