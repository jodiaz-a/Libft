/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:51:32 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 14:31:06 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	result;

	result = (long long int)n;
	if (result < 0)
	{
		write(fd, "-", 1);
		result = -result;
	}
	if (result > 9)
	{
		ft_putnbr_fd(result / 10, fd);
		ft_putchar_fd(48 + (result % 10), fd);
	}
	else
		ft_putchar_fd(48 + result, fd);
}
/*int	main(void)
{
	int numero = -12345; // Cambia esto al número que desees
	int fd = 1; // Cambia esto al descriptor de archivo que desees

	ft_putnbr_fd(numero, fd);

	return (0);
}*/
