/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 02:26:01 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/09 22:38:25 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	cchar;

	cchar = (char)c;
	while (*str != '\0')
	{
		if (*str == cchar)
			return ((char *)str);
		str++;
	}
	if (cchar == '\0')
		return ((char *)str);
	return (0);
}

/*int main() 
{
    const char *mi_cadena = "Hola, Mundo!";
    char c = 'H';
    char *resultado = ft_strchr(mi_cadena, c);

    if(resultado != NULL) {
        printf("El carácter '%c' se encontró en la cadena.\n", c);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", c);
    }

    return (0);
}*/