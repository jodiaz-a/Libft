/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:17:45 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 14:01:27 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*copy;
	char	*original;

	copy = (char *)dst;
	original = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		copy[i] = original[i];
		i++;
	}
	return (dst);
}
/*int main(void)
{
    char src[] = "Hello, world!";
    char dst[20]; // Asegúrate de que el tamaño de 'dst' sea suficiente

    ft_memcpy(dst, src, strlen(src));

    printf("Cadena copiada: %s\n", dst);

    return 0;
}*/