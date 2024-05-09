/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:09:39 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/09 22:48:09 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if ((char)c == '\0' && s[s_len] == '\0')
		return (&((char *)s)[s_len]);
	while (s_len > 0)
	{
		s_len--;
		if ((char)c == s[s_len])
			return (&((char *)s)[s_len]);
	}
	return (0);
}
/*int main() 
{
    char str[13] = "Hola mundo";
    char caracter = 'o';
    char *resultado = ft_strrchr(str, caracter);

    if (resultado) {
        printf("La última aparición de '%c' en '%s' está 
		en el índice %ld\n", caracter, str, resultado - str);
    } else {
        printf("El carácter '%c' no se encuentra en '%s'\n", caracter, str);
    }
    printf("longitud : %zu\n", ft_strlen(str));
    printf("1: %p, 2: %p", other, num);
    return 0;
}*/