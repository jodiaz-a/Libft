/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:37:40 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 12:56:13 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		count++;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	long	temp;
	char	*result;

	len = numlen(n);
	temp = n;
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (result == 0)
		return (NULL);
	if (temp == 0)
	{
		result[--len] = '0';
		return (result);
	}
	if (temp < 0)
	{
		result[0] = '-';
		temp *= -1;
	}
	while (temp > 0)
	{
		result[--len] = '0' + (temp % 10);
		temp /= 10;
	}
	return (result);
}
/*int	main(void)
{
	int num = 12345; // Cambia el valor de 'num' según tus necesidades
	char *result = ft_itoa(num);

	if (result)
		printf("El número %d convertido a cadena es: %s\n", num, result);
	else
		printf("Error al convertir el número %d a cadena.\n", num);

	free(result); // No olvides liberar la memoria asignada por ft_calloc

	return (0);
}*/