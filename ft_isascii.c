/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 01:10:59 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/03 01:25:51 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int c = 65; // Cambia el valor de 'c' según lo que quieras probar

	if (ft_isascii(c))
		printf("%c es un carácter ASCII válido.\n", c);
	else
		printf("%c no es un carácter ASCII válido.\n", c);

	return 0;
}*/