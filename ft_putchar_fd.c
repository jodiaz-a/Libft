/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:49:12 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 14:19:23 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write(fd, &c, 1);
}
/*int main(void)
{
    char character = 'M'; // Cambia el carácter según tus necesidades
    int fileDescriptor = 1; // Descriptor de archivo (1 para la salida estándar)

    ft_putchar_fd(character, fileDescriptor);

    return 0;
}*/