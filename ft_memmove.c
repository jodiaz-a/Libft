/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:42:52 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/03 02:39:37 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_copy;
	char	*src_copy;

	dst_copy = (char *)dst;
	src_copy = (char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			dst_copy[i] = src_copy[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len)
		{
			dst_copy[len - 1] = src_copy[len - 1];
			len--;
		}
	}
	return (dst);
}
