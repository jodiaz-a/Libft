/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:33:27 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/02 14:25:14 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	char ch = '7'; // Cambia el carácter aquí para probar diferentes valores

	if (ft_isdigit(ch))
		printf("%c es un dígito.\n", ch);
	else
		printf("%c no es un dígito.\n", ch);

	return 0;
}*/