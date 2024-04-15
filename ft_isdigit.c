/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:33:27 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/02 14:25:14 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if (c > '/' && c < ':')
        return (1);
    return (0);
}

/*int main ()
{
    char c1 = '4';
    char c2 = '+';

    if (isdigit(c1))
        {
            printf("The character '%c' is a decimal digit. \n", c1);
        }   
            else 
            {
            printf("the character '%c' is not a decimal digit. \n",c1);
            }
    if (isdigit(c2))
        {
            printf("The character '%c' is a decimal digit. \n", c2);
        }   
            else 
            {
            printf("the character '%c' is not a decimal digit. \n",c2);
            }
}*/