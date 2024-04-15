/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:15:07 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/04 18:56:38 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont] != 0)
	{
		cont++;
	}
	return (cont);
}
/*int main() {
    char str1[] = "";
    char str2[] = "Hello world";
    char str3[] = "this is a test, strong roots facing the sun";
    printf("'%s' character string length: %lu\n", str1, strlen(str1), ft_strlen(str1));
    printf("'%s' character string length: %lu\n", str2, strlen(str2), ft_strlen(str2));
    printf("'%s' character string length: %lu\n", str3, strlen(str3), ft_strlen(str3));
    return 0;
}*/