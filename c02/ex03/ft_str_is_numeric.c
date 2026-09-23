/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:00:43 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/23 17:59:30 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        return (1);
        else if (str[i] == ' ')
        return (1);
        else
        return (0);
        i++;
    }
}

int main(void)
{
    int x[5] = {'0', '1', '3', '7', '5'};
    ft_str_is_numeric(x[]);
    return (0);
}