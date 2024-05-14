/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:51:17 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 11:49:31 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	value;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	value = len;
	if (len > ft_strlen(haystack))
		value = ft_strlen(haystack);
	while (value >= ft_strlen(needle))
	{
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		haystack++;
		value--;
	}
	return (0);
}
/*int	main(void)
{
	const char *haystack = "Hello world";
	const char *needle = "world";
	size_t len = strlen(haystack);
	char *result = ft_strnstr(haystack, needle, len);

    if (result)
        printf("'%s' encontrado en '%s'\n", needle, haystack);
    else
        printf("'%s' no encontrado en '%s'\n", needle, haystack);

    return 0;
}*/