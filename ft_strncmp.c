/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:35:08 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/09 22:47:56 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i + 1 < n)
	{
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*int main(void)
{
	char *str1 = "lorem asdfgasdbjasbdjabsdasdasd";
	char *str2 = "lorem asdfgasdbjbsbdjabsdasdasd";
	int result;

	result = ft_strncmp(str1, str2, ft_strlen(str1));

	printf("The Difference Is: %d", result);
	return (0);
}*/
