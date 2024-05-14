/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:49:48 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 14:36:01 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write (fd, &s[0], ft_strlen(s));
}
/*int	main(void)
{
	char *message = "¡Hola, mundo!"; //Cambia esto la string que quieras
	int fd = 1; // Cambia esto al descriptor de archivo que desees

	ft_putstr_fd(message, fd);
	return (0);
}*/
