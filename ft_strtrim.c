/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:31:23 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 11:55:24 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len_s1;
	char	*string;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len_s1 = ft_strlen(s1);
	while (len_s1 > i && ft_strrchr(set, s1[len_s1 - 1]))
		len_s1--;
	string = ft_substr(s1, i, len_s1 - i);
	return (string);
}
