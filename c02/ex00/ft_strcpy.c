/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekouar <tmekouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:16:16 by tmekouar          #+#    #+#             */
/*   Updated: 2026/09/23 17:44:01 by tmekouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char str1[] = {"Hello"};
// 	char str2[50] = {"st"};
// 	printf("str1 = %s, str2 = %s\n", str1, str2);
// 	ft_strcpy(str2, str1);
// 	// strcpy(str2, str1);
// 	printf("str1 = %s, str2 = %s", str1, str2);
// 	return (0);
// }
