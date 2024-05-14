/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:01:25 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/03 01:01:54 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	isnum;
	int	isletter;

	isnum = ft_isdigit(c);
	isletter = ft_isalpha(c);
	if (isnum || isletter)
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	int c = 'A'; // Cambia el valor de 'c' según lo que quieras probar

	if (ft_isalnum(c))
		printf("%c es un carácter alfanumérico.\n", c);
	else
		printf("%c no es un carácter alfanumérico.\n", c);

	return 0;
}*/