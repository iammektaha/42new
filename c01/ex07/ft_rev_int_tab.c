/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 11:57:33 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/20 20:21:28 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;
    while (*tab)
    {
        printf("%d", tab[i]);
    }
    while(i < size / 2)
    {
        tab[i] = temp;
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;

        i++;
    }
}

int main(void)
{
    int a[] = {5, 6, 7, 8, 9};
    int s = 5;
    ft_rev_int_tab(a, s); 
    return (0);
}

int (int argc, char *argv[])