/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:02:22 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/17 21:04:18 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int res = *a / *b;
    int rem = *a % *b;
    *a = res;
    *b = rem;
}

// int main()
// {
//     int x = 8;
//     int y = 4;
//     int *a = &x;
//     int *b = &y;
//     ft_ultimate_div_mod(a, b);
//     printf("%d\n", *a);
//     printf("%d\n", *b);
//     return (0);
// }