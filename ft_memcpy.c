/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:17:45 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/03 02:29:08 by jodiaz           ###   ########.fr       */
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
