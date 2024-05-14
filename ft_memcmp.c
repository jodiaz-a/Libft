/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:56:22 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/15 01:17:34 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cast_s1[i] == cast_s2[i])
			i++;
		else
			return (cast_s1[i] - cast_s2[i]);
	}
	return (0);
}
/*int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, there!";
    size_t n = 9; // Cambia el valor de 'n' según tus necesidades

    int result = ft_memcmp(str1, str2, n);

    if (result == 0)
        printf("Las primeras %zu letras son iguales.\n", n);
    else if (result < 0)
        printf("La primera letra diferente es '%c' en str2.\n", str2[n]);
    else
        printf("La primera letra diferente es '%c' en str1.\n", str1[n]);

    return 0;
}*/