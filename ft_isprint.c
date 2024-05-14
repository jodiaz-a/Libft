/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:31:00 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/03 14:02:26 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char c = 'A'; // Cambia el valor de 'c' según tus necesidades

	if (ft_isprint(c))
		printf("El carácter '%c' es imprimible.\n", c);
	else
		printf("El carácter '%c' no es imprimible.\n", c);

	return (0);
}*/