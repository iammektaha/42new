/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:52:31 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/24 15:54:27 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char x[5] = {""};
    printf("%d", ft_str_is_uppercase(&x[0]));
    return (0);
}