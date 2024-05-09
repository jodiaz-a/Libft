/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:07:46 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/04 16:30:46 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*value_mod;

	value_mod = (char *)b;
	i = 0;
	while (i < len)
	{
		value_mod[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
