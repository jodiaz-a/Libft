/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:31:00 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/03 14:02:26 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main(void) 
{
    char testChar = 'A'; // change this character to try diferents values 
    if (ft_isprint(testChar))
     {
        printf("The character '%c' is printable.\n", testChar);
    }       else {
        printf("the character '%c' is not printable.\n", testChar);
    }

    return (0);
}*/