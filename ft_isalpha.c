/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:43:26 by jodiaz            #+#    #+#             */
/*   Updated: 2024/03/21 12:43:26 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int	main()
{
	char c1 = 'a';
   	char c2 = '+';
   	
   	if (isalpha(c1))
   	{
   	    printf("the character '%c' belongs to the alphabet. \n", c1);
   	}
   	    else 
            {
            printf("the character '%c' does not belong to the alphabet. \n",c1);
            }
            
            if (isalpha(c2))
   	{
   	    printf("the character '%c' belongs to the alphabet. \n", c2);
   	}
   	    else 
            {
            printf("the character '%c' does not belong to the alphabet. \n",c2);
            }
    return(0);
}*/