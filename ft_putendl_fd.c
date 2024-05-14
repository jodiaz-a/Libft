/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:50:55 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 14:24:21 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
		write(fd, &s[0], ft_strlen(s));
	write(fd, "\n", 1);
}
/*int	main(void)
{
	char *mensaje = "¡Hola, mundo!";
	int fd = 1; // Cambia esto al descriptor de archivo que desees

	ft_putendl_fd(mensaje, fd);

	return (0);
}*/