/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:32:29 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 12:33:22 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int	main(void)
{
	char buffer[10];
	ft_bzero(buffer, sizeof(buffer));

	// Ahora el contenido de 'buffer' está lleno de ceros.
	// Puedes continuar con otras operaciones aquí.

	return (0);
}*/