/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:41:24 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/17 21:04:15 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}

// int main()
// {
//     int x = 2;
//     int y = 4;
//     int res = x/y;
//     int rem = x%y;
//     int *div = &res;
//     int *mod = &rem;
//     ft_div_mod(x, y, &res, &rem);
//     printf("%d\n", *div);
//     printf("%d\n", *mod);
//     return (0);
// }