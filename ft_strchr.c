/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 02:26:01 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/15 01:15:24 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	return (0);
}

/*int main(void)
{
	const char *str = "Hello, world!";
	int target_char = 'w';

	char *result = ft_strchr(str, target_char);

	if (result)
		printf("El carácter '%c' se encuentra en la posición %ld de la cadena.\n",
	 target_char, result - str);
	else
		printf("El carácter '%c' no se encuentra en la cadena.\n", target_char);

	return 0;
}*/