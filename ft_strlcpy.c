/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:42:17 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 17:35:38 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (dstsize > 0)
	{
		while (src[j] && j < (dstsize - 1))
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}
/*int main(void)
{
	char src[] = "Hola, mundo!";
	char dst[50];
	size_t len;

	len = ft_strlcpy(dst, src, sizeof(dst));

	printf("La cadena de origen es: %s\n", src);
	printf("La cadena de destino es: %s\n", dst);
	printf("La longitud de la cadena de origen es: %zu\n", len);

	return 0;
}*/
