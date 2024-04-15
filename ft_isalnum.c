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

 int ft_isalnum(int c)
 {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z') || (c >= '0' && c <= '9' ))

        retun(1);
    else
        return(0);
 }

 /*int main() 
 {
    char c;
    c = '4';

    if (isalnum(c))
        printf("%c is alphanumeric (1)\n", c);
    else
        printf("%c is not alphanumeric (0)\n", c);
   return 0;
}*/