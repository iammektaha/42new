/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:59:37 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/24 16:15:39 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= ' ' && str[i] <= '~'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char x[3] = {""};
    printf("%d", ft_str_is_printable(&x[0]));
    return (0);
}