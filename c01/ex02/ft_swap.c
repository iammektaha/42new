/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 22:51:29 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/17 21:04:13 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int z = *a;
    *a = *b;
    *b = z;
}

// int main()
// {
//     int x = 1;
//     int y = 4; 
//     printf("%d\n", x);
//     printf("%d\n\n", y);
//     ft_swap(&x, &y);
//     printf("%d\n", x);
//     printf("%d\n", y);
//     return (0);
// }