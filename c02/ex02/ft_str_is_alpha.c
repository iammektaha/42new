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
    while(str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    printf("%d", ft_str_is_numeric("Hel5"));
    return (0);
}