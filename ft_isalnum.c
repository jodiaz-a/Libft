/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:01:25 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/03 01:01:54 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	isnum;
	int	isletter;

	isnum = ft_isdigit(c);
	isletter = ft_isalpha(c);
	if (isnum || isletter)
		return (1);
	else
		return (0);
}
