/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:36:19 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/09 15:08:54 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	else
	{
		i = 0;
		while (src[i] && dst_len + i < dstsize - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
		return (dst_len + src_len);
	}
}
/*int main()
{
	char dst[50] = "Hola, ";
	char src[] = "¿cómo estás?";
	size_t dstsize = sizeof(dst);
	size_t result;

	result = ft_strlcat(dst, src, dstsize);

	printf("Cadena resultante: %s\n", dst);
	printf("Longitud total de la cadena resultante: %zu\n", result);

	return 0;
}*/