/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:33:49 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 13:05:15 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	char *str1 = "Hello World";
	char cchar = 'd';
	char *result = ft_memchr(str1, cchar, ft_strlen(str1));

	if (result)
    {
        printf("Caracter encontrado: %c\n", *result);
        printf("Longitud de la cadena encontrada: %zu\n", strlen(result));
    }
    else
    {
        printf("Caracter no encontrado.\n");
    }

    return 0;
}*/