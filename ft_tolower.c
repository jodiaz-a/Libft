/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 02:15:14 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/09 16:01:48 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}

/*int main(void)
{
    char tolow = 'l';
    printf("Original: %c\t Lower_case: %c\n", tolow, ft_tolower(tolow));
	return (0);
    
}*/