/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:28:52 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/22 18:02:37 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i;
    
    while (size > 0)
    {
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i + 1] = temp;
            }
            i++;
        }
        size--;
    }

}

int main(void)
{
    int num[] = {99, 1, 3, 567, -1};
    int size = 5;
    ft_sort_int_tab(num, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    return (0);
}