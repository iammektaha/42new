/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:25:01 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/24 15:50:23 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char x[5] = {"hello"};
    printf("%d", ft_str_is_lowercase(&x[0]));
    return (0);
}