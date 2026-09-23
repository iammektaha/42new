/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 21:23:05 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/19 16:24:37 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, str, 1);
        str++;
        i++;
    }
    return (i);
}

int main()
{
    ft_strlen("Hello");
    return (0);
}